#include <iostream>

using namespace std;
int KiemTraNam(int);
int maxday(int , int);

int main()
{
    int d,m,y;
    cout<<"Moi nhap mot ngay \n";
    cin>>d>>m>>y;
    int D = maxday(y,m);
    cout<<"------------------------------\n";
    cout<<"Ngay hom qua la\n";
    if (d > 1) cout<<d-1<<" "<<m<<" "<<y;
    if (d==1) {
        if (m > 1) cout<<maxday(y,m-1)<<" "<<m-1<<" "<<y;
        if (m==1) {
            if (y > 1) cout<<"31 12 "<<y-1;
            if (y==1) cout<<"\nkhong co ngay hon qua";
        }

    }
    return 0;
}
int KiemTraNam(int a) {
    if ((a % 4)== 0) return 1;
    if  (((a% 100) == 0) && ((a%400)== 0)) return 1;
    return 0;
    }
int maxday (int a, int b) {
    if (b == 2 ) {
        if (KiemTraNam(a)) return 29;
        return 28;
    }
   if ((b==1) || (b==3) || (b==5)|| (b==7)||(b==8)||(b==10)||(b==12)) return 31;
   else return 30;
    }
