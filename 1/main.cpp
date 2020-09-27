#include <iostream>

using namespace std;

void Nhap(int a[],int n){
     for (int i = 0 ;i<n;i++) {
        cin>>a[i];
    }
    }
void Xuat (int a[], int n) {
    for (int i=n-1;i>=0;i--) {
        cout<<a[i];
    }
           }
int main(){
    int a[100];
    int n;
    cin>>n;
    Nhap(a,n);
    Xuat(a,n);


    return 0;
}
