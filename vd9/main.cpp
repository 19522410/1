#include <iostream>

using namespace std;

class Cdiem {
private:
    float x,y;
public:
     friend istream& operator >> (istream& , Cdiem&);
     friend ostream& operator << (ostream& , Cdiem&);
};

class CDT {
private:
    Cdiem a;
    Cdiem b;
public:
     friend istream& operator >> (istream& , CDT&);
     friend ostream& operator << (ostream& , CDT&);
};

int main()
{
    CDT a;
    cin>>a;
    cout<<a;
    return 0;
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
istream& operator >> (istream& is , CDT& c ) {
    cout<<"\nNhap diem thu nhat: ";
    is>>c.a;
    cout<<"\nNhap diem thu hai: ";
    is>>c.b;
    return is;
}
ostream& operator << (ostream& os , CDT& c) {
    os<<"\nDiem thu nhat: "<<c.a;
    os<<"\nDiem thu hai: "<<c.b;
    return os;
}
