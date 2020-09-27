#include <iostream>
#include<string.h>

using namespace std;


    struct Point
    {
        int x;
        int y;

    }A,B;
int CmpDisAB( Point A ,Point B)
{
  int da = A.x*A.x +A.y*A.y;
  int db = B.x*B.x +B.y*B.y;
  if (da<db) return -1;
  if (da>db) return 1;
   return 0;
}
int main()
{
    /*A.MaSo=19522410;
    A.GioiTinh=1;
    strcpy(A.HovaTen,"Nguyen Thanh Trong");
    cout<<A.MaSo<<endl;
    cout<<A.HovaTen<<endl;
    cout<<(A.GioiTinh==1?"Nam":"Nu")<<endl;
    SinhVien C;
    strcpy(C.HovaTen,"Nguyen Thanh tr");
    cout<<C.HovaTen;*/
    cout<<"Nhap toa do:"<<endl;
    cout<<"----------------------------------------------------\n";
    cout<<"A(x,y)=";
    cin>>A.x>>A.y;
    cout<<"\nB(x,y)=";
    cin>>B.x>>B.y;
    cout<<CmpDisAB(A,B);

    return 0;
}
