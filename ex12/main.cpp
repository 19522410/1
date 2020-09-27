#include <iostream>

using namespace std;
class CDiemxyz {
private:
    float x,y,z;
public:
    CDiemxyz();
    ~CDiemxyz();
    friend istream& operator >> (istream& , CDiemxyz&);
    friend ostream& operator << ( ostream& , CDiemxyz&);
    friend class CHinhCau;
};
class CHinhCau {
    private:
    CDiemxyz a;
    int r;
    public:
         CHinhCau();
        CHinhCau(CDiemxyz& , int );
        CHinhCau(const CHinhCau&);
        ~CHinhCau();
    friend istream& operator >> (istream& , CHinhCau&);
    friend ostream& operator << ( ostream& , CHinhCau&);
};

int main()
{
    CDiemxyz q;
    CHinhCau a;
    CHinhCau b(q,4);
    CHinhCau c (a);
    //cin>>a;
    cout<<a<<b<<c;
    return 0;
}
CDiemxyz::CDiemxyz() {
    x = 1;
    y = 2;
    z = 3;
}
CDiemxyz::~CDiemxyz() {
return;
}
CHinhCau::CHinhCau() {
    a.x = 1;
    a.y = 1;
    a.z = 1;
    r = 1;
}
CHinhCau::CHinhCau (CDiemxyz&q , int e) {
    a= q ;

    r = e;
}
CHinhCau::CHinhCau(const CHinhCau &c){
    a = c.a;
    r = c.r;
}
CHinhCau::~CHinhCau(){
return;
}
istream& operator >> (istream& is, CDiemxyz& a) {
    cout<<"\nx ?";
    is>>a.x;
    cout<<"\ny ?";
    is>>a.y;
    cout<<"\nz ?";
    is>>a.z;
    return is;
}
ostream& operator << ( ostream& os , CDiemxyz& a) {
    os<<"\nHoanh do: "<<a.x;
    os<<"\nTung do: "<<a.y;
    os<<"\nCao do: "<<a.z;
    return os;
}
istream& operator >> (istream& is, CHinhCau& q) {
    cout<<"\nNhap tam hinh cau: ";
    is>>q.a;
    cout<<"\nNhap ban kinh hinh cau: ";
    is>>q.r;
    return is;
}
ostream& operator << ( ostream& os , CHinhCau& q) {
    os<<"\n-------------------\n";
    os<<"\nTam hinh cau: "<<q.a;
    os<<"\nBan kinh hinh cau: "<<q.r;
    return os;
}
