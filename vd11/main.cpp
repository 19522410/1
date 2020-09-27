#include <iostream>

using namespace std;

class Cdiem {
private:
    float x,y;
public:
     friend istream& operator >> (istream& , Cdiem&);
     friend ostream& operator << (ostream& , Cdiem&);
};

class CTamGiac {
private:
    Cdiem a;
    Cdiem b;
    Cdiem c;
public:
     friend istream& operator >> (istream& , CTamGiac&);
     friend ostream& operator << (ostream& , CTamGiac&);
};

int main()
{
    CTamGiac a;
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
    os<<"\nDinh thu nhat: "<<d.a;
    os<<"\nDiem thu hai: "<<d.b;
    os<<"\nDiem thu ba: "<<d.c;


    return os;
}
