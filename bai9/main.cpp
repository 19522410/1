#include <iostream>

using namespace std;
class CDiem {
private:
    float x,y;
public:
    void Nhap();
};
class CDTron{
private:
    CDiem I;
    float r;
public:
    void NhapTron();
    float Chuvi();
    float Dientich();
};
int main()
{
    CDTron a;
    a.NhapTron();
    cout<<"Chu vi: "<<a.Chuvi();
    cout<<"\nDien tich: "<<a.Dientich();

    return 0;
}
void CDiem::Nhap(){
    cout<<"Nhap toa do tam: ";
    cin>>x>>y;
}
void CDTron::NhapTron(){
    I.Nhap();
    cout<<"\nNhap ban kinh: ";
    cin>>r;
}
float CDTron:: Chuvi() {
    return 2*3.14*r;
}
float CDTron::Dientich(){
    return 3.14*r*r;
}
