#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int n,m;
    cout<<"NHAP SO DONG: ";
    cin>>n;
    cout<<"NHAP SO COT: ";
    cin>>m;
    int a[n][m];
    for (int i=0;i<n;i++)   {
        for (int j=0;j<m;j++){
         a[i][j]= rand()%100;
        }
    }
    for (int i=0;i<n;i++)   {
        for (int j=0;j<m;j++){
         cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<endl;
    cout<<"------------------------------------------\n";
    int b[m][n];
        for (int j=0;j<m;j++){
             for (int i=0;i<n;i++)   {
            b[j][i]=a[i][j];
        }
    }
    for (int j=0;j<m;j++)           {
        for (int i=0;i<n;i++)   {
            cout<<b[j][i]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
