#include <iostream>

using namespace std;
class CThoiGian {
private:
    int s,m,h;
public:
    CThoiGian();
    CThoiGian(int,int,int);
    CThoiGian (const CThoiGian&);
    ~CThoiGian();
    friend istream& operator >> (istream& , CThoiGian&);
    friend ostream& operator << (ostream& , CThoiGian&);

};


int main()
{
    CThoiGian a;
    CThoiGian b(1,3,5);
    CThoiGian c(a);
    //cin>>a;
    cout<<a<<b<<c;
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
    os<<"\n------------------------\n";
    os<<"Gio: "<<b.h;
    os<<"\nPhut: "<<b.m;
    os<<"\ngiay: "<<b.s;
    return os;
}
CThoiGian::CThoiGian(){
    s = 1;
    m = 1;
    h = 1;
}
CThoiGian::CThoiGian(int x ,int y,int z){
    s = z;

    m = y;
    h = x;
}
CThoiGian::CThoiGian(const CThoiGian& c) {
    s = c.s;
    m = c.m;
    h = c.h;
}
CThoiGian::~CThoiGian(){
return;
}
