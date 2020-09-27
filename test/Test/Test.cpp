#include<iostream>
using namespace std;
class  CPhanSo
{
private:
    float tu,mau;

public:
    void Nhap();
    void Xuat();

};
int main()
{
    CPhanSo a;
    a.Nhap();
    a.Xuat();

	return 0;
}

 void CPhanSo::Nhap()
{
     cout << "Tu: ";
     cin >> tu;
     cout << "\nMau: ";
     cin >> mau;

}

 void CPhanSo::Xuat() 
 {
     cout << "Tu: " << tu;
     cout << "\nMau: " << mau;
    
 }