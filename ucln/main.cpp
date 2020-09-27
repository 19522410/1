#include <iostream>

using namespace std;
int UCLN (int &a, int &b) {
    if (a > b) {
            a=a-b;
            UCLN(a,b);
    }
    else if (a < b) {
            b=b-a;
        UCLN(a,b);
    }
    else if (a*b==0) return 0;
    else  return a;
}


int main()
{
    int a,b;
    cout<<"Nhap a ";
    cin>>a;
    cout<<"Nhap b ";
    cin>>b;
   cout<<"\n"<<UCLN(a,b);

    return 0;
}
