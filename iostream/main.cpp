#include <iostream>

using namespace std;
class CPhanSo {
private:
    int tu,mau;
public:
    friend istream& operator >> (istream& , CPhanSo&);
    friend ostream& operator << (ostream& , CPhanSo&);

};


int main()
{
    CPhanSo a;
    cin>>a;
    cout<<a;

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
    os<<"Phan so: "<<b.tu<<"/"<<b.mau;
    return os;

}
