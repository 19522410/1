#include <iostream>

using namespace std;
struct diem {
int x,y;
};
typedef struct diem DIEM;

void Nhap(diem &a);
const float p = 3.14;
int main()
{
    diem i;
    float r;
    cout<<"Nhap tam duong tron\n";
    Nhap(i);
    cout<<"\nNhap ban kinh duong tron\n";
    cin>>r;
    float cv = 2*p*r;
    float s = p*r*r;
    cout<<"\nChu vi: "<<cv;
    cout<<"\nDien tich: "<<s;
    return 0;
}
void Nhap(diem &a){
    cout<<"Nhap toa do tam: ";
    cin>>a.x>>a.y;
}
