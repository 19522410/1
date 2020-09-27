#include <iostream>

using namespace std;
class CDonThuc {
private:
    int heso,somu;
public:
    friend istream& operator >> (istream& , CDonThuc&);
    friend ostream& operator << (ostream& , CDonThuc&);

};


int main()
{
    CDonThuc a;
    cin>>a;
    cout<<a;
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
    os<<1;
    } else
    os<<b.heso<<"x^"<<b.somu;
    return os;

}

