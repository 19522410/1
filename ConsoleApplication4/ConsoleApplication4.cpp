#include <iostream>

using namespace std;

class Cdiem {
private:
    float x, y;
public:
    Cdiem();
    Cdiem(int, int);
    ~Cdiem();
    friend istream& operator >> (istream&, Cdiem&);
    friend ostream& operator << (ostream&, Cdiem&);
    friend class CDT ;
};

class CDT {
private:
    Cdiem a;
    Cdiem b;
public:
    CDT();
    CDT(Cdiem&, Cdiem&);
    CDT( CDT&);
    friend istream& operator >> (istream&, CDT&);
    friend ostream& operator << (ostream&, CDT&);
};

int main()
{
    Cdiem q;
    Cdiem w(1, 5);

    CDT a;
    CDT b(q, w);
    CDT c(a);
    //cin>>a;
    cout << a << b << c;
    return 0;
}
Cdiem::Cdiem() {
    x = 1;
    y = 3;
}
Cdiem::Cdiem(int a, int b) {
    x = a;
    y = b;
}
Cdiem::~Cdiem() {
    return;
}
istream& operator >> (istream& is, Cdiem& a) {
    cout << "\nNhap x: ";
    is >> a.x;
    cout << "\nNhap y: ";
    is >> a.y;
    return is;
}
ostream& operator << (ostream& os, Cdiem& a) {
    os << "\nX: " << a.x;
    os << "\nY: " << a.y;
    return os;
}
/*istream& operator >> (istream& is , CDT& c ) {
    cout<<"\nNhap diem thu nhat: ";
    is>>c.a;
    cout<<"\nNhap diem thu hai: ";
    is>>c.b;
    return is;
}*/
ostream& operator << (ostream& os, CDT& c) {
    os << "\n------------------------------\n";
    os << "\nDiem thu nhat: " << c.a;
    os << "\nDiem thu hai: " << c.b;
    return os;
}
CDT::CDT() {
    
    a.x = 1;
    a.y = 2;
    b.x = 3;
    b.y = 4;
}
CDT::CDT(Cdiem& q, Cdiem& w) {
   a.x = q.x;
    a.y = q.y;
    b.x = w.x;
    b.y = w.y;
    a = q;
    b = w;
}
CDT::CDT(CDT& q) {
    a = q.a;
    b = q.b;
}
