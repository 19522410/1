

#include <iostream>
using namespace std;
class CPhanSo
{
private:
    int tu, mau;
public:
    CPhanSo(int a)
    {
        tu = a;
        mau = 1;
    }
    CPhanSo(int a, int b)
    {
        tu = a;
        mau = b;
    }
    friend CPhanSo operator+ ( CPhanSo x,CPhanSo y)
    {
        
         return CPhanSo(y.tu * x.mau + x.tu *y.mau, y.mau * x.mau);
    }
     /*CPhanSo operator+ (int x)
     {
         return CPhanSo(x * mau + tu, mau);
     }
     friend CPhanSo operator+(int x, CPhanSo q)
     {
         return CPhanSo(x * q.mau + q.tu, q.mau);
     }*/
     friend ostream& operator<<(ostream& os, CPhanSo x)
     {
         os << x.tu << "/" << x.mau;
         return os;
     }  
};
int Sum(int a, int b)
{
    return a + b;
};
double Sum(double a, double b)
{
    return a + b;
};
int main()
{
    /*CPhanSo a(1,2),b(1,3);
    a = 3 + b;
    cout << a;*/
         int a = 3, b = 7;
         double r = 3.2, s = 6.3;
         cout << a + b << "\n";
         cout << r + s << "\n";
         cout << a + r << "\n";
         cout << Sum(a, b) << "\n";
         cout << Sum(r, s) << "\n";
         
}

