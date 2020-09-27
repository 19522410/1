#include <iostream>

using namespace std;
class CHonSo {
private:
    int tu,mau,nguyen;
public:
    friend istream& operator >> (istream& , CHonSo&);
    friend ostream& operator << (ostream& , CHonSo&);

};


int main()
{
    CHonSo a;
    cin>>a;
    cout<<a;

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
    os<<"Tu: "<<b.tu;
    os<<"\nMau: "<<b.mau;
    os<<"\nPhan Nguyen: "<<b.nguyen;
    return os;

}
