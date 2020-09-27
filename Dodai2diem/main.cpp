#include <iostream>
#include<cmath>

using namespace std;
struct point {
    int x,y;
};
typedef struct point POINT;
void Nhap (point&);
float dodai (point,point);
int main()
{
    point a,b;
    Nhap(a);
    Nhap(b);
    float kq = dodai(a,b);
    cout<<endl<<kq<<endl;
    return 0;
}
void Nhap(point &p) {

    cout<<"Nhap toa do \n";
    cin>>p.x>>p.y;
}
float dodai(point a ,point b){
    return  sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
    }
