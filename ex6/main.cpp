#include <iostream>

using namespace std;
class CDay {
private:
    int d,m,yy;
public:
    CDay();
    CDay(int,int,int);
    CDay(const CDay&);
    ~CDay();
    friend istream& operator >> (istream& , CDay&);
    friend ostream& operator << (ostream& , CDay&);

};


int main()
{
    CDay a;
    CDay b(4,9,1);
    CDay c(a);
    //cin>>a;
    cout<<a<<b<<c;
    return 0;
}
istream& operator >> (istream& is , CDay &b) {
    cout<<"Nhap ngay: ";
    is>>b.d;
    cout<<"\nNhap thang: ";
    is>>b.m;
     cout<<"\nNhap nam: ";
    is>>b.yy;
    return is;
}
ostream& operator << (ostream& os , CDay &b) {
    os<<"\n--------------------\n";
    os<<"Ngay: "<<b.d;
    os<<"\nThang: "<<b.m;
    os<<"\nNam: "<<b.yy;
    return os;

}
CDay::CDay(){
    d = 1;
    m = 1;
    yy = 1;
}
CDay::CDay(int x,int y,int z) {
    d = x;
    m = y;
    yy = z;
}
CDay::CDay(const CDay& a){
    d = a.d;
    m = a.m;
    yy = a.yy;

}
CDay::~CDay() {
return;
}

