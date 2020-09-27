#include <iostream>

using namespace std;
struct phanso {
int x,y;
};
typedef struct phanso PHANSO;
void Nhap(phanso&);
float Tong (phanso,phanso);
float Hieu (phanso,phanso);
float Tich (phanso,phanso);
float Thuong (phanso,phanso);

int main()
{
    phanso a,b;
    Nhap(a);
    Nhap(b);
    cout<<"Tong: "<<(float)Tong(a,b);
    cout<<"\nHieu: "<<(float)Hieu(a,b);
    cout<<"\nTich: "<<(float)Tich(a,b);
    cout<<"\nThuong: "<<(float)Thuong(a,b);
    return 0;
}
void Nhap(phanso &a) {
    cout<<"Nhap tu \n";
    cin>>a.x;
    cout<<"\nNhap mau\n";
    cin>>a.y;
}
float Tong(phanso a,phanso b) {
    return ((float)(a.x*b.y+a.y*b.x)/(float)(a.y*b.y));

}
float Hieu(phanso a,phanso b) {
    return ((float)(a.x*b.y-a.y*b.x)/(float)(a.y*b.y));

}
float Tich(phanso a, phanso b){
    return ((float)(a.x*b.x)/(float)(a.y*b.y));

}
float Thuong(phanso a, phanso b){
    return ((float)(a.x*b.y)/(float)(a.y*b.x));

}




