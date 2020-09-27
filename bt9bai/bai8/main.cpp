#include <iostream>
#include<cmath>

using namespace std;
struct diem {
float x,y;
};
typedef struct diem DIEM;
void Nhap(diem&);
float dodai(diem,diem);
void trongtam(diem,diem,diem,diem&);
int main()
{
    diem a,b,c,g;
    Nhap(a);
    Nhap(b);
    Nhap(c);
    float cv = dodai(a,b) + dodai(b,c) + dodai(a,c);
    float p = cv/2;
    float s = sqrt( p*(p-dodai(a,b))*(p-dodai(b,c))*(p-dodai(a,c)));
    cout<<"Chu vi: "<<cv;
    cout<<"\nDien tich: "<<s;
    trongtam(a,b,c,g);
    cout<<"\nToa do trong tam: G = ("<<g.x<<","<<g.y<<")";
    return 0;
}
void Nhap(diem &a){
    cout<<"Nhap toa do diem : ";
    cin>>a.x>>a.y;
}
float dodai(diem a,diem b) {
    return sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y));
}
void trongtam (diem a, diem b, diem c,diem &g){
     g.x = (float)(a.x+b.x+c.x) / 3;
     g.y =(float) (a.y + b.y + c.y) /3;
}
