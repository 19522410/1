#include <iostream>

#include <cmath>
using namespace std;
int ktsnt(int a) {
    int d=0;
    for (int i=2; i < a ; i++){
      if (a%i==0) d++;
    }
    if (d == 0) return 0;
    return 1;
}
int main()
{   int s=1,n;
    cout<<"Moi nhap mot so nguyen \n";
    cin>>n;
    if (n < 2) {
        cout<<"s=0";
        return 0;
    }
    for (int i = 2; i<n;i++) {
        if (ktsnt(i)==0) s=s*i;
    }
    cout<<s;
    return 0;
}
