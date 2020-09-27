// CPP program to demonstrate use of  
// std::unordered_map 
#include <iostream> 
#include<string>
#include <unordered_map>
using namespace std;
int main()
{
    std::unordered_map<string, string> mymap;

    mymap.emplace("1", "J.T. Kirk");
    mymap.emplace("3", "J.L. Picard");
    mymap.emplace("trong", "K. Janeway");
    mymap.emplace("4", "K");
    mymap.emplace("5", "Janeway");
    mymap.emplace("tong","way");

    std::cout << "mymap contains:" << std::endl;
    for (auto i = mymap.begin(); i != mymap.end(); i++)
        std::cout << i->first << ": " << i->second << std::endl;

    std::cout << std::endl;
    return 0;
}
