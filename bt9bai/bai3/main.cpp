#include <iostream>

using namespace std;
struct PhanSo {
float tu,mau;
};
typedef struct PhanSo PHANSO;
void Nhap(PhanSo&);
int Xuat (PhanSo,PhanSo);
int main()
{
    PhanSo a,b;
    Nhap(a);
    Nhap(b);
    if(Xuat(a,b)==1) cout<<"Phan so A: "<<a.tu<<"/"<<a.mau<<" lon nhat";
    else if (Xuat(a,b)==0) cout<<"\nPhan so B: "<<b.tu<<"/"<<b.mau<<" lon nhat";
    else cout<<"\nHai phan so bang nhau";

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
    else if ((a.tu/a.mau)-(b.tu/b.mau) < 0) return 0;
    return -1;
}
