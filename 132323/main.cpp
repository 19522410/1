#include <iostream>

using namespace std;
int ktsnt(int i) {
    for (int j=2; j < i ;j++) {

        if (i%j==0) return 0;
    }

     return 1;

    }
int tinh(int n) {
    int s=0;
    int i;
    for(int i=2;i<=n;i++)
    if (ktsnt(i)==1) {
        s+=i;
    }
    return s;
}
int main()
{

    int n;
    cout<<"Nhap so nguyen :\n";
    cin>>n;
    cout<<tinh(n);


    return 0;
}
