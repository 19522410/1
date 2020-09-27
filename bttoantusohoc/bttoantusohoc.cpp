

#include <iostream>
using namespace std;
class CPhanSo
{   
private:
    int tu;
    int mau;
public:
    CPhanSo operator+ (CPhanSo);
    friend ostream& operator << (ostream&, CPhanSo&);
    friend istream& operator >> (istream&, CPhanSo&);
    CPhanSo operator- (CPhanSo);
    CPhanSo operator* (CPhanSo);
    CPhanSo operator/ (CPhanSo);
    CPhanSo& operator+=(CPhanSo);
    CPhanSo& operator -=(CPhanSo);
    CPhanSo& operator *=(CPhanSo);
    CPhanSo& operator /=(CPhanSo);
    CPhanSo operator++();
    CPhanSo operator--();
};

int main()
{
    CPhanSo a,b;
    cin >> a>>b;
    CPhanSo e = a + b;
    cout << "\n+";
    cout << e ;
    cout << "\n-";
    e = a - b;
    cout << e;
    cout << "\n*";
    e = a * b;
    cout << e;
    cout << "\n/";
    e = a / b;
    cout << e;
    cout << "\n+=";
    a += b;
    cout << a;
    cout << "\n-=";
    a -= b;    
    cout << a;
    cout << "\n*=";
    a *= b;   
    cout << a;
    cout << "\n/=";
    a /= b;   
    cout << a;
    cout << "\n++";
    a++;
    cout << a;
    cout << "\n--";
    a--;
    cout << a;
    return 0;
}

CPhanSo CPhanSo::operator-(CPhanSo x)
{
    CPhanSo t;
    t.mau = mau * x.mau;
    t.tu = tu * x.mau - x.tu * mau;
    
    return t;
}
CPhanSo CPhanSo::operator+(CPhanSo x)
{
    CPhanSo t;
    t.mau = mau * x.mau;
    t.tu = tu * x.mau + x.tu * mau;

    return t;
}
CPhanSo CPhanSo::operator*(CPhanSo x)
{
    CPhanSo t;
    t.mau = mau * x.mau ;
    t.tu = tu  *  x.tu ;

    return t;
}
CPhanSo CPhanSo::operator/(CPhanSo x)
{
    CPhanSo t;
    t.mau = mau * x.tu ;
    t.tu = tu * x.mau;

    return t;
}

CPhanSo& CPhanSo::operator+=(CPhanSo x)
{
    tu = tu * x.mau + x.tu * mau;
    mau = mau * x.mau;
    return *this ;
}

CPhanSo& CPhanSo::operator-=(CPhanSo x)
{
    tu = tu * x.mau - x.tu * mau;
    mau = mau * x.mau;

    return *this ;
}
CPhanSo& CPhanSo::operator*=(CPhanSo x)
{
    mau = mau * x.mau;
    tu = tu * x.tu;

    return *this;
}
CPhanSo& CPhanSo::operator/=(CPhanSo x)
{
    mau = mau * x.tu;
    tu = tu * x.mau;

    return *this;
}
CPhanSo CPhanSo::operator ++ ()
{
    CPhanSo t;
    t.tu = tu + mau ;
    
    return t;
}
CPhanSo CPhanSo::operator --()
{
    CPhanSo t;
    t.tu = tu -  mau;
    mau = mau;

    return t;
}
ostream& operator<<(ostream& os, CPhanSo& a)
{
    int x = a.tu;
    int y = a.mau;
    if (x < 0) x = -x;
    if (y < 0) y = -y;
    while (x != y)
    {
        if (x > y) x = x - y;
        if (x < y) y = y - x;
    }
    a.tu = a.tu / x;
    a.mau = a.mau / x;
    os << "\nTu : " << a.tu ;
    os << "\nMau : " << a.mau;
    return os;
}

istream& operator>> (istream& is, CPhanSo& a)
{
    cout << "Nhap tu: ";
    is >> a.tu;
    cout << "Nhap mau: ";
    is >> a.mau;
    return is;
}
