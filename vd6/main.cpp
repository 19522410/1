#include <iostream>

using namespace std;
class CDay {
private:
    int d,m,y;
public:
    friend istream& operator >> (istream& , CDay&);
    friend ostream& operator << (ostream& , CDay&);

};


int main()
{
    CDay a;
    cin>>a;
    cout<<a;
    return 0;
}
istream& operator >> (istream& is , CDay &b) {
    cout<<"Nhap ngay: ";
    is>>b.d;
    cout<<"\nNhap thang: ";
    is>>b.m;
     cout<<"\nNhap nam: ";
    is>>b.y;
    return is;
}
ostream& operator << (ostream& os , CDay &b) {
    os<<"Ngay: "<<b.d;
    os<<"\nThang: "<<b.m;
    os<<"\nNam: "<<b.y;
    return os;

}
