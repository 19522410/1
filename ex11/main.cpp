#include <iostream>

using namespace std;

class Cdiem {
private:
    int x,y;
public:
    Cdiem();
    Cdiem(int,int);
    Cdiem (Cdiem &q);
    ~Cdiem();
     friend istream& operator >> (istream& , Cdiem&);
     friend ostream& operator << (ostream& , Cdiem&);
     friend class CTamGiac;
};

class CTamGiac {
private:
    Cdiem a;
    Cdiem b;
    Cdiem c;
public:
    CTamGiac();
    CTamGiac(Cdiem&,Cdiem&,Cdiem&);
    CTamGiac(const CTamGiac&);
    ~CTamGiac();
     friend istream& operator >> (istream& , CTamGiac&);
     friend ostream& operator << (ostream& , CTamGiac&);
};

int main()
{
    Cdiem p,i,u;
    CTamGiac t;
    CTamGiac r(p,i,u);
    CTamGiac z(t);
    //cin>>a;
    cout<<t<<r<<z;
    return 0;
}
Cdiem::Cdiem(){
    x = 1;
    y = 3;
}
Cdiem::~Cdiem(){
return;
}
CTamGiac::CTamGiac() {
   a.x = 1;
   a.y = 2;
   b.x = 3;
   b.y = 4;
   c.x = 5;
   c.y = 6;
}
CTamGiac::CTamGiac(Cdiem &q, Cdiem &w,Cdiem &z) {
    a = q;
    b = w;
    c = z;
}
CTamGiac::CTamGiac(const CTamGiac &q) {
    a = q.a;
    b = q.b;
    c = q.c;
}
CTamGiac::~CTamGiac(){
return;
}
istream& operator >> (istream& is, Cdiem &a ){
    cout<<"\nNhap x: ";
    is>>a.x;
    cout<<"\nNhap y: ";
    is>>a.y;
    return is;
}
ostream& operator << (ostream& os , Cdiem& a) {
    os<<"\nX: "<<a.x;
    os<<"\nY: "<<a.y;
    return os;
}
istream& operator >> (istream& is , CTamGiac&d ) {
    cout<<"\nNhap dinh thu nhat: ";
    is>>d.a;
    cout<<"\nNhap dinh thu hai: ";
    is>>d.b;
    cout<<"\nNhap dinh thu ba: ";
    is>>d.c;
    return is;
}
ostream& operator << (ostream& os , CTamGiac&d) {
    os<<"\n-------------------------\n";
    os<<"\nDinh thu nhat: "<<d.a;
    os<<"\nDiem thu hai: "<<d.b;
    os<<"\nDiem thu ba: "<<d.c;


    return os;
}
