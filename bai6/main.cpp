#include <iostream>

using namespace std;
class Cday {
    private:
        int d,m,y;
    public:
        void nhap();
        void xuat();
        int ngaytrongthang();
        void xuly();

};

int main()
{
    Cday a;
    a.nhap();
    a.xuly();
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
    cout<<"Ngay mai la: ";
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
void Cday::xuly() {
    if (d < (this -> ngaytrongthang()) ) {
        d++;
    }
    if (d == (this -> ngaytrongthang()) ) {
        if (m<12) {
            d=1;
            m++;
        }
        else if (m==12) {
            d=1;
            m=1;
            y++;
        }
    }


}

