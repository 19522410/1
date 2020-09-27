#include <errno.h>
#include <io.h>
#include <string.h>
#include <iostream>
#include<vector>
#include <chrono>

using namespace std;
using namespace chrono;
int main(int argc, char* argv[])
{
    intptr_t handle;
    struct _finddata_t fileinfo;
    vector<string> f_name;

    auto start = high_resolution_clock::now();

    handle = _findfirst(argv[2], &fileinfo);
    if (handle == -1) {
        cout << strerror(errno);
        exit(1);
    }
    f_name.push_back(fileinfo.name);
    /* cout << fileinfo.name << endl;*/


    while (_findnext(handle, &fileinfo) == 0) {
        /*cout << fileinfo.name << endl;*/
        f_name.push_back(fileinfo.name);
    }
    int temp = strlen(argv[2] - 5);
    argv[2][temp - 5] = 0;
    int n_file = f_name.size();
    if (!strcmp(argv[2], "map_from_scratch"))
    {

    }
    _findclose(handle);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);

    cout << "Time taken by function: "
        << duration.count() << " seconds" << endl;
    return 0;