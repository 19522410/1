#include <iostream>
#include<cmath>

using namespace std;
struct diem {
int x,y;
};
typedef struct diem DIEM;
void Nhap(diem&);
float dodai(diem,diem);
int main()
{
    diem a,b,c;
    Nhap(a);
    Nhap(b);
    Nhap(c);
    float cv = dodai(a,b) + dodai(b,c) + dodai(a,c);
    float p = cv/2;
    float s = sqrt( p*(p-dodai(a,b))*(p-dodai(b,c))*(p-dodai(a,c)));
    cout<<"Chu vi: "<<cv;
    cout<<"\nDien tich: "<<s;
    return 0;
}
void Nhap(diem &a){
    cout<<"Nhap toa do diem : ";
    cin>>a.x>>a.y;
}
float dodai(diem a,diem b) {
    return sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y));
}
