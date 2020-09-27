#include <iostream>
#include <string.h>
#include <stdio.h>


using namespace std;

int main()
{
    char str[100];
    cin.getline(str,100);
    int    n= strlen(str);
    /*for (int i = 0; i < n ; i++) {
        char c = str[i];

        cout<<c<<"==>"<<(int)c<<endl;;
    }*/
    int j=0;
    char str1[100]="";
    for (int i = n-1 ; i >= 0 ; i--) {
            str1[j] = str[i];
            j++;

    }

    cout<<str1;
    return 0;
}
