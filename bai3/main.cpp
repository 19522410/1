#include <iostream>

using namespace std;
class Cphanso {
   private:
    float x,y;
   public:
    void nhap();
    void xuat();
    int kiemtra(Cphanso);
};

int main()
{
    Cphanso a,b;
    a.nhap();
    b.nhap();
    if (a.kiemtra(b)==1) cout<<"\nPhan so a lon nhat\n";
    else if (a.kiemtra(b)==0) cout<<"\nPhan so b lon nhat\n";
    else cout<<"\nHai phan so bang nhau\n";

    return 0;
}
void Cphanso::nhap() {
    cout<<"Nhap tu: ";
    cin>>x;
    cout<<"\nNhap mau: ";
    cin>>y;
}
int Cphanso :: kiemtra(Cphanso b){
    if (((x/y)-(b.x/b.y)) > 0 ) return 1;
    else if (((x/y)-(b.x/b.y)) < 0 ) return 0;
    return -1;
}

