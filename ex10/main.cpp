#include <iostream>

using namespace std;
class CDiem {
private:
    float x,y;
public:
    CDiem();
    ~CDiem();
    friend istream& operator >> (istream& , CDiem&);
    friend ostream& operator << ( ostream& , CDiem&);
    friend class CDuongTron;
};
class CDuongTron {
    private:
    CDiem a;
    int r;
    public:
        CDuongTron();
        CDuongTron(CDiem& , int );
        CDuongTron(const CDuongTron&);
        ~CDuongTron();
    friend istream& operator >> (istream& , CDuongTron&);
    friend ostream& operator << ( ostream& , CDuongTron&);
};

int main()
{
    CDiem w;
    CDuongTron a;
    CDuongTron b(w,2);
    CDuongTron c(a);
    //cin>>a;
    cout<<a<<b<<c;
    return 0;
}
CDiem::CDiem() {
    x = 2;
    y = 3;
}
CDiem::~CDiem() {
return;
}
CDuongTron::CDuongTron() {
    a.x = 1;
    a.y = 1;
    r = 1;
}
CDuongTron::CDuongTron (CDiem &q , int e) {
    a= q ;

    r = e;
}
CDuongTron::CDuongTron(const CDuongTron &c){
    a = c.a;
    r = c.r;
}
CDuongTron::~CDuongTron(){
return;
}
istream& operator >> (istream& is, CDiem& a) {
    cout<<"\nx ?";
    is>>a.x;
    cout<<"\ny ?";
    is>>a.y;
    return is;
}
ostream& operator << ( ostream& os , CDiem& a) {
    os<<"\nHoanh do: "<<a.x;
    os<<"\nTung do: "<<a.y;
    return os;
}
istream& operator >> (istream& is, CDuongTron& q) {
    cout<<"\nNhap tam hinh tron: ";
    is>>q.a;
    cout<<"\nNhap ban kinh duong tron: ";
    is>>q.r;
    return is;
}
ostream& operator << ( ostream& os , CDuongTron& q) {
    os<<"\n-------------------------------\n";
    os<<"\nTam duong tron: "<<q.a;
    os<<"\nBan kinh duong cau: "<<q.r;
    return os;
}
