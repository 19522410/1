// ontapki1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>;

using namespace std;
void Nhap(char a[], int &n)
{
    cin.getline(a, 100);
   n = strlen(a);   
}
void Xuat(char a[], int n) 
{
    puts(a);
}
void UPcase(char a[]) 
{
    for (int i = 0 ; i < strlen(a) ; i++) 
    {
        if ((a[i] >= 97) && (a[i] <= 122))
            a[i] = a[i] - 32;
    }
}
void SearchChar(char a[])
{
    char* p;
    int n = strlen(a);
    int d = 0;
    char k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        p = strchr(a + i,k);
        if (!p) break; // if (p) true neu contr
        int vitri = p - a;
        d++;
        cout << "Vi tri cua chuoi nho = " << vitri << endl;
            i = vitri;
    }
    cout << "So lan xuat hien cua chuoi nho : " << d;    
}
void XoaKhoangTrang(char* str, int n) {
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];

        }
        else if ((str[i] == ' ') && (str[i + 1] != ' ')) {
            str[j++] = str[i];
        }
    }
    if (str[j - 1] == ' ')
       str[j - 1] = '\0';
    else str[j] = '\0';
    if (str[0] == ' ') {
        for (int i = 0; i < n; i++)
            str[i] = str[i + 1];

    }


}
int main()
{  
    char a[100],k;
    int n;
    Nhap(a, n);
    //Xuat(a, n);
    //UPcase(a);
    //Xuat(a,n);
    //SearchChar(a);
    XoaKhoangTrang(a, n);
    Xuat(a, n);

    return 0;

}

