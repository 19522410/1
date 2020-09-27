#include <iostream>

using namespace std;
struct PhanSo {
int tu,mau;
};
typedef struct PhanSo PHANSO;
void Nhap(PhanSo&);
int Xuat (PhanSo,PhanSo);
int main()
{
    PhanSo a,b;
    Nhap(a);
    Nhap(b);
    if(Xuat(a,b)) cout<<"Phan so A: "<<a.tu<<"/"<<a.tu<<" lon nhat";
    else cout<<"\nPhan so B: "<<b.tu<<"/"<<b.mau<<" lon nhat";

    return 0;
}
void Nhap(PhanSo &a) {
    cout<<"Nhap tu \n";
    cin>>a.tu;
    cout<<"\nNhap mau\n";
    cin>>a.mau;
}
int  Xuat(PhanSo a,PhanSo b){
    if ((a.tu/a.mau)-(b.tu/b.mau) > 0) return 1;
    return 0;



}
