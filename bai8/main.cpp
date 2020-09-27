#include <iostream>
#include<cmath>

using namespace std;

    class CDiem
    {
        private:
            float x,y;
        public:
            void Nhap();
            void Xuat();
            float Khoangcach(CDiem);
            void trongtam(CDiem,CDiem,CDiem&);
 };
 class tamgiac {
    CDiem a,b,c,g;

 public:
     void nhaptamgiac();
    float dientich();
    float chuvi();
    void trongtamtamgiac();
    void tamgiacxuat();

 };
int main()
{
    tamgiac A;
    CDiem g;
    A.nhaptamgiac();
    cout<<"\nChu Vi: "<<A.chuvi()<<endl;
    cout<<"\nDien Tich: "<<A.dientich()<<endl;
    A.trongtamtamgiac();
    A.tamgiacxuat();


    return 0;
}
void CDiem::Nhap() {
    cout<<"Nhap X: ";
    cin>>x;
    cout<<"\nNhap Y: ";

    cin>>y;
    cout<<endl;
}
void CDiem::Xuat() {
    cout<<"\nToa do X: "<<x<<endl;
    cout<<"\nToa do Y: "<<y<<endl;
}
float CDiem::Khoangcach(CDiem Z){
    return sqrt(pow(x-Z.x,2)+pow(y-Z.y,2));
}
float tamgiac::chuvi(){
    return (a.Khoangcach(b)+a.Khoangcach(c)+b.Khoangcach(c));
}
float tamgiac::dientich(){
    float p = (this-> chuvi())/2;
    float x = a.Khoangcach(b);
    float y = a.Khoangcach(c);
    float z = b.Khoangcach(c);
    return sqrt(p*(p-x)*(p-y)*(p-z));
}
void tamgiac:: nhaptamgiac() {
    a.Nhap();
    b.Nhap();
    c.Nhap();
    }
void tamgiac::trongtamtamgiac (){
        a.trongtam(b,c,g);
    }
void tamgiac::tamgiacxuat(){
    g.Xuat();
}
void CDiem::trongtam(CDiem X, CDiem Y,CDiem &Z){
    Z.x = (x+Y.x+X.x)/3;
    Z.y = (y+Y.y+X.y)/3;
}
