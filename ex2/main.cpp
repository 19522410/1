#include <iostream>

using namespace std;
class CPoinxyz {
private:
    int x,y,z;
public:
    CPoinxyz();
    CPoinxyz(int, int,int);
    CPoinxyz(const CPoinxyz&);
    ~CPoinxyz();
    friend istream& operator >> (istream& , CPoinxyz&);
    friend ostream& operator << (ostream& , CPoinxyz&);

};


int main()
{
    CPoinxyz a;
    //cin>>a;
    cout<<a;
    CPoinxyz b(1,5,4);
    //cin>>a;
    cout<<b;
    CPoinxyz c(b);
    //cin>>a;
    cout<<c;
    return 0;
}
istream& operator >> (istream& is , CPoinxyz &b) {
    cout<<"Nhap x: ";
    is>>b.x;
    cout<<"\nNhap y: ";
    is>>b.y;
     cout<<"\nNhap z: ";
    is>>b.z;
    return is;
}
ostream& operator << (ostream& os , CPoinxyz &b) {
    os<<"\n----------------------\n";
    os<<"X: "<<b.x;
    os<<"\nY: "<<b.y;
    os<<"\nZ: "<<b.z;
    return os;

}
CPoinxyz::CPoinxyz() {
    x = 1;
    y = 2;
    z = 4;
}
CPoinxyz::CPoinxyz( int xx, int yy,int zz){
    x = xx;
    y = yy;
    z = zz;
}
CPoinxyz::CPoinxyz(const CPoinxyz& c) {
    x = c.x;
    y = c.y;
    z = c.z;
}
CPoinxyz::~CPoinxyz(){
return;
}
