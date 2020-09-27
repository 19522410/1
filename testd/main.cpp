#include <iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
    char str1[255],str2[255];
    gets(str1);
    strcpy(str2,str1);
    for (int i = 0 ; i < strlen(str1) ; i++){
        if ( i%2 == 0 && str1[i] >= 'a' && str1[i] <= 'z') str1[i] -= 32;
        if (i%2 !=0 && str1[i] >= 'A' && str1[i] <= 'Z') str1[i] += 32;
    }
    cout<<"Chuoi ban dau\n---------------------------------------------\n"<<str2;
    cout<<"\n--------------------------------------------\n"<<str1;

    return 0;
}
