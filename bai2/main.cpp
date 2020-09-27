#include <iostream>
#include<cmath>

using namespace std;
class Cdiem {
    private:
        float x,y;
    public:
        void nhap();
        float tinh(Cdiem);
};

int main()
{
    Cdiem a,b;
    a.nhap();
    b.nhap();
    cout<<"\nKhoang cach 2 diem: \n";
    cout<<b.tinh(a);
    return 0;
}
void Cdiem::nhap(){
    cout<<"Nhap toa do x: ";
    cin>>x;
    cout<<"\nNhap toa do y: ";
    cin>>y;
}
float Cdiem :: tinh(Cdiem b) {
    return sqrt((x-b.x)*(x-b.x)+(y-b.y)*(y-b.y));
}
