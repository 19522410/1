#include <iostream>

using namespace std;
struct sophuc {
    int ao,thuc;
};
typedef struct sophuc SOPHUC;
void Nhap(sophuc&);
void Tong(sophuc,sophuc,sophuc&);
void Hieu(sophuc,sophuc,sophuc&);
void Tich(sophuc,sophuc,sophuc&);
int main()
{
    sophuc a,b,c;
    Nhap(a);
    Nhap(b);
    Tong(a,b,c);
    cout<<"Tong: \n";
    cout<<c.thuc;if (c.ao >= 0) cout<<"+";cout<<c.ao<<"i";
    Hieu(a,b,c);
    cout<<"\nHieu: \n";
    cout<<c.thuc;if (c.ao >= 0) cout<<"+";cout<<c.ao<<"i";

    Tich(a,b,c);
    cout<<"\nTich: \n";
    cout<<c.thuc;if (c.ao >= 0) cout<<"+";cout<<c.ao<<"i";

    return 0;
}
void Nhap(sophuc &a) {

    cout<<"Phan thuc: \n";
    cin>>a.thuc;
    cout<<"Phan ao: \n";
    cin>>a.ao;
}
void Tong(sophuc a,sophuc b, sophuc &c){
    c.ao = a.ao + b.ao;
    c.thuc = a.thuc + b.thuc;
}
void Hieu(sophuc a,sophuc b, sophuc &c){
    c.ao = a.ao - b.ao;
    c.thuc = a.thuc - b.thuc;
}
void Tich(sophuc a,sophuc b, sophuc &c){
    c.ao = a.thuc*b.ao + a.ao*b.thuc;
    c.thuc = a.thuc*b.thuc - a.ao*b.ao;
}

