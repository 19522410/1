
#include <iostream>
using namespace std;
class CNgay
{
private:
    int d,m,y;
public:
    friend istream& operator>> (istream&, CNgay&);
    friend ostream& operator<< (ostream&, CNgay&);
    CNgay& operator= (const CNgay&);
};

int main()
{
    CNgay a, b;
    cin >> a;
    b = a;
    cout << b;
}

istream& operator>>(istream& is, CNgay& a)
{
    cout << "Nhap ngay: ";
    is >> a.d;
    cout << "Nhap thang: ";
    is >> a.m;
    cout << "Nhap nam: ";
    is >> a.y;
    return is;
}

ostream& operator<<(ostream& os, CNgay& a)
{
    os << "\nNgay: " << a.d;
    os << "\nThang: " << a.m;
    os << "\nNam: " << a.y;
    return os;
}

CNgay& CNgay::operator=(const CNgay& a)
{
    d = a.d;
    m = a.m;
    y = a.y;
    return *this;
}
