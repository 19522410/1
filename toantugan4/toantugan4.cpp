
#include <iostream>
using namespace std;
class CHonSo
{
private:
    int tu, mau, nguyen;
public:
    friend istream& operator>> (istream&, CHonSo&);
    friend ostream& operator<< (ostream&, CHonSo&);
    CHonSo& operator= (const CHonSo&);
};

int main()
{
    CHonSo a, b;
    cin >> a;
    b = a;
    cout << b;
}

istream& operator>>(istream& is, CHonSo& a)
{
    cout << "Nhap tu: ";
    is >> a.tu;
    cout << "Nhap mau: ";
    is >> a.mau;
    cout << "Nhap nguyen: ";
    is >> a.nguyen;
    return is;
}

ostream& operator<<(ostream& os, CHonSo& a)
{
    os << "\nTu: " << a.tu;
    os << "\nMau: " << a.mau;
    os << "\nNguyen: " << a.nguyen;
    return os;
}

CHonSo& CHonSo::operator=(const CHonSo& a)
{
    tu = a.tu;
    mau = a.mau;
    nguyen = a.nguyen;
    return *this;
}
