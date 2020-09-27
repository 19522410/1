#include <iostream>

using namespace std;
class CDonThuc {
private:
    int heso,somu;
public:
    CDonThuc();
    CDonThuc(int,int);
    CDonThuc(const CDonThuc&);
    ~CDonThuc();
    friend istream& operator >> (istream& , CDonThuc&);
    friend ostream& operator << (ostream& , CDonThuc&);

};


int main()
{
    CDonThuc a;
    CDonThuc b(1,1);
    CDonThuc c(a);
    //cin>>a;
    cout<<a<<b<<c;
    return 0;
}
istream& operator >> (istream& is , CDonThuc &b) {
    cout<<"Nhap he so : ";
    is>>b.heso;
    cout<<"\nNhap so mu: ";
    is>>b.somu;
    return is;
}
ostream& operator << (ostream& os , CDonThuc &b) {
    if (b.somu == 0){
        os<<"\n---------------------------------\n";
    os<<1;
    } else {
    os<<"\n---------------------------------\n";
    os<<b.heso<<"x^"<<b.somu;
    }
    return os;

}
CDonThuc::CDonThuc(int x,int y) {
    heso = x;
    somu = y;
}
CDonThuc::CDonThuc(){
    heso = 3;
    somu = 4;
}
CDonThuc::CDonThuc(const CDonThuc &c) {
    heso = c.heso;
    somu = c.somu;
}
CDonThuc::~CDonThuc(){
return;
}
