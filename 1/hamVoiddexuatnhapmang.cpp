#include <iostream>

using namespace std;


void Nhap(int a[],int* n){
    cin>>*n;
     for (int i = 0 ;i < *n;i++) {
        cin>>a[i];
    }
    }
void Xuat (int a[], int n) {
    for (int i=0;i < n;i++) {
        cout<<a[i];
    }
}
void Max (int a[],int n,int m)  {
    m=a[0];
    for (int i=1;i<n;i++) {
        if (m<a[i]) {
            m=a[i];
        }
    }
    cout<<m;
}

int main(){
    int a[100];
    int n,m;
    Nhap(a,&n);
    Xuat(a,n);
    cout<<endl;
    Max(a,n,m);

/*.sh/6eeli(cin n trong ham void)*/
    return 0;
}
