#include <iostream>

using namespace std;
struct PhanSo {
int tu,mau;
};
typedef struct PhanSo PHANSO;
void Nhap(PhanSo&);
int Xuat (PhanSo);
int main()
{
    PhanSo a;
    Nhap(a);
    if (Xuat(a)) cout<<"\nphan so am";
    else cout<<"\nphan so duong";
    return 0;
}
void Nhap(PhanSo &a) {
    cout<<"Nhap tu \n";
    cin>>a.tu;
    cout<<"\nNhap mau\n";
    cin>>a.mau;
}
int Xuat(PhanSo a){
    if ((a.mau*a.tu) < 0) return 1;
    return 0;



}
