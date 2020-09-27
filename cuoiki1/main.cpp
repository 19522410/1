#include <iostream>

using namespace std;
void Nhap(int a[], int &n) {
    cout<<"Nhap so phan tu \n";
    cin>>n;

    for (int i=0 ;i < n ;i++) {
        cout<<"A["<<i<<"]= ";
        cin>>a[i];
    }


}
void Xuat(int a[], int n) {


    for (int i=0 ;i < n ;i++) {

        cout<<a[i]<<" ";
    }


}
int  KiemTra(int b) {
    if (b<2) return 0;
    else
    for (int i = 2 ; i < b; i++ ) {
        if ((b%i) == 0) return 0;
    }
    return 1;
}
void InSoNguyenTo (int a[] , int n) {
    for ( int i = 0 ; i< n ; i++){
        if (KiemTra(a[i])) cout<<a[i]<<" ";
    }

}
int ChanLe (int a[],int n) {
    int da,db;
    da=db=0;
    for (int i = 0 ; i < n ; i++) {
        if (a[i]%2==0) da++;
        if (a[i]%2 != 0) db++;
    }
    if (da == n) return 1;
    if (db == n) return -1;
    return 0;
}

int main()
{
    cout << "Hello world!" << endl;
    int a[100],n;

    Nhap(a,n);
    Xuat(a,n);
    cout<<"\n-----------------------------------\n";
    InSoNguyenTo(a,n);
    cout<<"\n-----------------------------------\n";
    cout<<ChanLe(a,n);
    return 0;
}
