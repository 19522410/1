#include <iostream>

using namespace std;
class Cphanso {
    private:
        float x,y;
    public:
        void nhap();
        float Tong (Cphanso);
        float Hieu (Cphanso);
        float Tich (Cphanso);
        float Thuong (Cphanso);
    };

int main()
{
    Cphanso a,b;
    a.nhap();
    b.nhap();
    cout<<"\nTong hai phan so: "<<a.Tong(b);
    cout<<"\nHieu hai phan so: "<<a.Hieu(b);
    cout<<"\nTich hai phan so: "<<a.Tich(b);
    cout<<"\nThuong hai phan so: "<<a.Thuong(b);
    return 0;
}
void Cphanso::nhap(){
    cout<<"Nhap tu: ";
    cin>>x;
    cout<<"\nNhap mau: ";
    cin>>y;
}
float Cphanso::Tong(Cphanso q) {
    return (x*q.y+q.x*y)/(y*q.y);
}
float Cphanso::Hieu(Cphanso q) {
    return (x*q.y-q.x*y)/(y*q.y);
}
float Cphanso::Tich(Cphanso q) {
    return (x*q.x)/(y*q.y);
}
float Cphanso::Thuong(Cphanso q){
    return (x*q.y)/(y*q.x);
}
