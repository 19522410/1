#include <iostream>

using namespace std;
class Cday {
    private:
        int d,m,y;
    public:
        void nhap();
        void xuat();
        int ngaytrongthang();
        int xuly();

};

int main()
{
    Cday a;
    a.nhap();

      if (a.xuly()==0) cout <<"\nKhong co ngay hom qua";
      else
        a.xuat();
    return 0;
}
void Cday::nhap(){
    cout<<"Nhap ngay: ";
    cin>>d;
    cout<<"\nNhap thang: ";
    cin>>m;
    cout<<"\nNhap nam: ";
    cin>>y;
}
void Cday::xuat() {
    cout<<"Ngay hom qua la: ";
    cout<<"\nNgay: "<<d;
    cout<<"\nThang: "<<m;
    cout<<"\nNam: "<<y;
}
int Cday::ngaytrongthang() {
    if ((m==1) || (m==3) || (m==5) || (m==7) || (m==8) || (m==10) || (m==12)) return 31;
    if (m==2) {
        if ((y%4) || ((y%100) && (y%400))) return 29;
        else return 28;
    }
    return 30;
}
int Cday::xuly() {
    if ((d==1) && (m==1) && (y==1)) return 0;
    if ((d <= (this -> ngaytrongthang()) ) && (d > 1)) {
        d--;
    }
    if (d == 1 ) {
        if (m!=1) {
                m--;
            d= this -> ngaytrongthang();
        }
        else {
            d=31;
            m=12;
            y--;
        }
}
    return 1;
}
