#include <iostream>

using namespace std;
class CHonSo {
private:
    int tu,mau,nguyen;
public:
    CHonSo();
    CHonSo(int,int,int);
    CHonSo (const CHonSo&);
    ~CHonSo();
    friend istream& operator >> (istream& , CHonSo&);
    friend ostream& operator << (ostream& , CHonSo&);

};


int main()
{
    CHonSo a;
    //cin>>a;
    cout<<a;
    CHonSo b(1,5,6);
    cout<<b;
    CHonSo c(a);
    cout<<c;


    return 0;
}
istream& operator >> (istream& is , CHonSo &b) {
    cout<<"Nhap tu: ";
    is>>b.tu;
    cout<<"\nNhap mau: ";
    is>>b.mau;
    cout<<"\nNhap phan nguyen: ";
    is>>b.nguyen;

    return is;
}
ostream& operator << (ostream& os , CHonSo &b) {
    os<<"\n-----------------------------\n";
    os<<"Tu: "<<b.tu;
    os<<"\nMau: "<<b.mau;
    os<<"\nPhan Nguyen: "<<b.nguyen;
    return os;
}
CHonSo::CHonSo(){
    tu = 2;
    mau = 9;
    nguyen = 2;
}
CHonSo::CHonSo(int x,int y, int z){
    tu = x;
    mau = y;
    nguyen = z;
}
CHonSo::CHonSo(const CHonSo& q) {
    tu = q.tu;
    mau = q.mau;
    nguyen = q.nguyen;
}
CHonSo::~CHonSo(){
return;
}
