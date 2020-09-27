#include <iostream>

using namespace std;
int main(){    int n;        int s = 0;    cin >> n;    for (int i = 1; i <= n; i++)    {        s = s + i / (i + 1);    }    cout << "\n" << s;    return 0;}