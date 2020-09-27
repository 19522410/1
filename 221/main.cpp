#include <iostream>
#include <stdio.h>
#include<string.h>

using namespace std;
void  XoaKhoangTrang(char *str,int n ) {
    int j = 0;
    for (int i = 0 ; i < n ; i++) {
            if ( str[i] != ' ') {
            str[j++] = str[i];

            }
            else if  ((str[i] = ' ') && (str[i+1] != ' ')) {
                    str[j++] = str[i];
            }
    }
        if (str[j-1] = ' ')
        str[j-1] = '\0';
    else str[j] = '\0';
       if (str[0] = ' '){
         for (int i = 0 ; i < n ; i++)
        str[i] = str[i+1];

    }


}
int main()
{
    char str[100];
    cout<<"Nhap chuoi";
    gets(str);
   int  n = strlen(str);
    XoaKhoangTrang(str,n);

    cout<<str;

    return 0;
}
