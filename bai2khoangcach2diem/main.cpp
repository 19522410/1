#include <iostream>
#include <cmath>

using namespace std;
struct diem {
int x,y;
};
typedef struct diem DIEM;
void Nhap(diem&);
float Xuat(diem,diem);
int main()
{
    diem a,b;
    Nhap(a);
    Nhap(b);
    cout<<Xuat(a,b);
    return 0;
}
void Nhap(diem &a){
    cout<<"Nhap toa do : ";
    cin>>a.x>>a.y;

}
float Xuat(diem a,diem b) {
    return sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y));
}
