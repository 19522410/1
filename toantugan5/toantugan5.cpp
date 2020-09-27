
#include <iostream>
using namespace std;
class CSoPhuc
{
private:
    int ao, thuc;
public:
    friend istream& operator>> (istream&, CSoPhuc&);
    friend ostream& operator<< (ostream&, CSoPhuc&);
    CSoPhuc& operator= (const CSoPhuc&);
};

int main()
{
    CSoPhuc a, b;
    cin >> a;
    b = a;
    cout << b;
}


istream& operator>>(istream& is, CSoPhuc& a)
{
    cout << "Nhap so thuc: ";
    is >> a.thuc;
    cout << "Nhap phan ao: ";
    is >> a.ao;
    return is;
}

ostream& operator<<(ostream& os, CSoPhuc& a)
{
    os << "\nThuc: " << a.thuc << "\nAo: " << a.ao;
    return os;
}

CSoPhuc& CSoPhuc::operator=(const CSoPhuc& a)
{
    thuc = a.thuc;
    ao = a.ao;
    return *this;
}
