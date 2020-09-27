#include <iostream>

using namespace std;
void NhapMang(int n , int a[]) {
    for (int i = 0 ; i< n ;i++) {
        cout<<"A["<<i<<"]=";
        cin>>a[i];
    }
}
void XuatMang (int n , int a[]) {
    for (int i=0 ;i< n;i++) {
        cout<<a[i]<<"\t";
    }
}
int main()
{
    int a=1,b=2,t;
    int *pa,*pb;
    pa=&a;
    pb=&b;
    t=*pa;
    *pa=*pb;
    *pb=t;
    cout<<a<<endl<<b;


    return 0;
}
