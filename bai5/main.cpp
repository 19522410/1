#include <iostream>

using namespace std;
class   Cphuc {
    private:
        int thuc,ao;
    public:
        void nhap();
        void tong(Cphuc,Cphuc&);
        void hieu(Cphuc,Cphuc&);
        void tich(Cphuc,Cphuc&);
        void xuat();
    };

int main()
{
    Cphuc a,b,c;
    a.nhap();
    b.nhap();
    a.tong(b,c);
    cout<<"Tong: ";
    c.xuat();
    a.hieu(b,c);
    cout<<"Hieu: ";
    c.xuat();
    a.tich(b,c);
    cout<<"Tich: ";
    c.xuat();
    return 0;
}
void    Cphuc::nhap(){
    cout<<"Nhap phan thuc: ";
    cin>>thuc;
    cout<<"\nNhap phan ao: ";
    cin>>ao;
}
void Cphuc::tong(Cphuc b,Cphuc &c) {
    c.ao = ao + b.ao;
    c.thuc = thuc + b.thuc;
}
void Cphuc::hieu(Cphuc b,Cphuc &c) {
    c.ao = ao- b.ao;
    c.thuc = thuc - b.thuc;
}
void Cphuc::tich(Cphuc b,Cphuc &c) {
    c.ao = thuc*b.ao + ao*b.thuc;
    c.thuc = (thuc*b.thuc - ao*b.ao);
}
void Cphuc::xuat(){
    cout<<"\nPhan thuc: "<<thuc;
    cout<<"\nPhan ao: "<<ao<<endl;
}
