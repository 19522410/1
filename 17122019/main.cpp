#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    char str1[100];
    gets(str1);
    cout<<"\n"<<str1<<endl;
    char str2[100];
    cin.getline(str2,100);
    char* p;
    int n = strlen(str1);
    int d=0;
    for ( int i = 0 ; i < n; i++) {
        p=strstr(str1+i,str2);
        if(!p) break; // if (p) true neu contro khong la NULL if(!p) // true neu p la NULL
       int vitri = p-str1;

        d++;


    cout<<"Vi tri cua chuoi nho = "<<vitri<<endl;
    i=vitri;


}
cout<<"So lan xuat hien cua chuoi nho : "<<d;





    return 0;
}
