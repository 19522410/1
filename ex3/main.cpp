#include <iostream>

using namespace std;
class CPhanSo {
private:
    int tu,mau;
public:
    CPhanSo();
    CPhanSo(int,int);
    CPhanSo(const CPhanSo&);
    ~CPhanSo();
    friend istream& operator >> (istream& , CPhanSo&);
    friend ostream& operator << (ostream& , CPhanSo&);

};


int main()
{
    CPhanSo a;
    //cin>>a;
    cout<<a;
    CPhanSo b(2,3);
    cout<<b;
    CPhanSo c(a);
    cout<<c;

    return 0;
}
istream& operator >> (istream& is , CPhanSo &b) {
    cout<<"Nhap tu: ";
    is>>b.tu;
    cout<<"\nNhap mau: ";
    is>>b.mau;
    return is;
}
ostream& operator << (ostream& os , CPhanSo &b) {
    os<<"\n-------------------------------\n";
    os<<"Phan so: "<<b.tu<<"/"<<b.mau;
    return os;

}
CPhanSo::CPhanSo(){
    tu = 1;
    mau = 1;
}
CPhanSo::CPhanSo(int x,int y) {
    tu = x;
    mau = y;
}
CPhanSo::CPhanSo(const CPhanSo&a) {
    tu = a.tu;
    mau = a.mau;
}
CPhanSo::~CPhanSo(){
return;
}
