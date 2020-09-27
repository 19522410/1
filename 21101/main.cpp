#include <iostream>

using namespace std;

int main()
{
    int n,d=0;
    cout << "\nNhap n = ";
    cin >> n;
    for (int i = 2;i<=n;i++) {
        while ( n%i==0){
            cout<<i;
            n=n/i;
            if (n>1) cout<<"x";
        }
    }
    return 0;
}
