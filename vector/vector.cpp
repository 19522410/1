#include"thamso.h"
#include<string.h>
#include<vector>
#include<stdio.h>
#include<fstream>
#include<chrono>

using namespace std;
using namespace chrono;

struct word {
    string value;
    bool visit;
};

const char* delimiters = ".,:;`'/+-(){}[]<>*&^%$#@!?~/\\= \r\t\n1234567890";
const int delimiters_size = strlen(delimiters);

bool is_delimiters(const char c)
{
    for (int i = 0; i < delimiters_size; i++)
        if (c == delimiters[i])
            return true;
    return false;
}

bool sortbyfirstdesc(const pair<int, int>& a, const pair <int, int>& b)
{
    return a.first > b.first;
}

void extract_n_grams(const string path, vector<word>& n_grams)
{
    ifstream ifs(path, ios_base::in);

    char c;

    string w = "";
    char prv_char = ' ';

    int b = 1;
    int i = 1;
    while (ifs.get(c))
    {
        if (is_delimiters(c))
        {
            if (prv_char == ' ')
                continue;
            else
            {
                prv_char = ' ';
                n_grams.push_back({ w, false });
                w = "";
            }
        }
        else
        {
            w += tolower(c);
            prv_char = tolower(c);
        }
    }
}

// 1-ngrams
int match_count(vector<word> uni_A, vector<word> uni_B)
{
    int total_match = 0;
    for (int i = 0; i < uni_A.size(); i++)
    {
        for (int j = 0; j < uni_B.size(); j++)
        {
            if (uni_B[j].visit)
                continue;

            if (uni_A[i].value == uni_B[j].value)
            {
                uni_B[j].visit = true;
                total_match++;
                break;
            }
        }
    }

    return total_match;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();

    vector<vector<word>> list_uni;
    vector<string> list_file;
    int nb_file = 0;
    const char* path = "./sm_doc_set";

    for (const auto& entry : filesystem ::directory_iterator(path))
    {
        if (entry.path().extension() == ".txt")
        {
            vector<word> uni;
            extract_n_grams(entry.path(), uni);
            list_file.push_back(entry.path());
            list_uni.push_back(uni);
            nb_file++;
        }
    }

    vector<string> list_i;
    vector<string> list_j;
    vector<pair<int, int>> list_match;
    int k = 0;
    for (int i = 0; i < nb_file; i++)
    {
        for (int j = i + 1; j < nb_file; j++)
        {
            list_i.push_back(list_file[i]);
            list_j.push_back(list_file[j]);
            for (int z = 0; z < list_uni[j].size(); z++)
                list_uni[j][z].visit = false;
            list_match.push_back(make_pair(match_count(list_uni[i], list_uni[j]), k));
            k++;
        }
    }
    sort(list_match.begin(), list_match.end(), sortbyfirstdesc);

    for (int i = 0; i < list_match.size(); i++)
    {
        int j = list_match[i].second;
        cout << list_i[j] << " " << list_j[j] << " " << list_match[i].first << endl;
    }

    end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "finished computation at " << std::ctime(&end_time)
        << "elapsed time: " << elapsed_seconds.count() << "s\n";

    return 0;