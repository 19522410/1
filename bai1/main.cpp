#include <iostream>

using namespace std;
class Cphanso {
   private:
    float x,y;
   public:
    void nhap();
    int kiemtra();
};

int main()
{
    Cphanso a;
    a.nhap();
    int d = a.kiemtra();
    if (d==1) cout <<"\nPhan so duong";
   else if (d==0) cout<<"\nPhan so am";
    else cout<<"\nPhan so bang khong";
    return 0;
}
void Cphanso::nhap() {
    cout<<"Nhap tu: ";
    cin>>x;
    cout<<"\nNhap mau: ";
    cin>>y;
}
int Cphanso:: kiemtra(){
    if ((x*y) > 0) return 1;
    else if ((x*y) < 0) return 0;
    return -1;

}
