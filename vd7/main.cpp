#include <iostream>

using namespace std;
class CThoiGian {
private:
    int s,m,h;
public:
    friend istream& operator >> (istream& , CThoiGian&);
    friend ostream& operator << (ostream& , CThoiGian&);

};


int main()
{
    CThoiGian a;
    cin>>a;
    cout<<a;
    return 0;
}
istream& operator >> (istream& is , CThoiGian &b) {
    cout<<"Nhap gio: ";
    is>>b.h;
    cout<<"\nNhap phut: ";
    is>>b.m;
     cout<<"\nNhap giay: ";
    is>>b.s;
    return is;
}
ostream& operator << (ostream& os , CThoiGian &b) {
    os<<"Gio: "<<b.h;
    os<<"\nPhut: "<<b.m;
    os<<"\ngiay: "<<b.s;
    return os;

}
