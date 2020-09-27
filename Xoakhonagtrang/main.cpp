#include <iostream>
#include <stdio.h>
#include<string.h>

using namespace std;
void XoaKhoangTrang(char *str)
{
	int j=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]!=' ')
			str[j++]=str[i];
		else if(j>0&&str[i+1]!=' ')
			str[j++]=str[i];
	}
	if(str[j-1]==' ')
		str[j-1]='\0';
	else
		str[j]='\0';


}
int main()
{
    cout << "Hello world!" << endl;
    char str[100];
    gets(str);
    int n = strlen(str);
    XoaKhoangTrang(str);
    for ( int i = 0 ; i < n ; i++) {
        if((str[i] <= 'Z' ) && (str[i] >= 'A') )str[i]= str[i] +32;
    }
    str[0] = str[0] -32;
    for (int i = 1 ; i < n ; i++)  {
        if (str[i] == ' ' ) str[i+1] = str[i+1] -32;
    }

    puts(str);
    return 0;
}
