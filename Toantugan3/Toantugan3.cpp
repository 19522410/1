
#include <iostream>
using namespace std;
class CPhanSo
{
private:
    int tu, mau;
public:
    friend istream& operator>> (istream&, CPhanSo&);
    friend ostream& operator<< (ostream&, CPhanSo&);
    CPhanSo& operator= (const CPhanSo&);
};

int main()
{
    CPhanSo a, b;
    cin>> a;
    b = a;
    cout << b;
}

istream& operator>>(istream& is, CPhanSo& a)
{
    cout << "Nhap tu: ";
    is >> a.tu;
    cout << "Nhap mau: ";
    is >> a.mau;
    return is;
}

ostream& operator<<(ostream& os, CPhanSo& a)
{
    os << "\nTu: " << a.tu;
    os << "\nMau: " << a.mau;
    return os;
}

CPhanSo& CPhanSo::operator=(const CPhanSo& a)
{
    tu = a.tu;
    mau = a.mau;
    return *this;
}
