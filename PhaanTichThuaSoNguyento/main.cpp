#include <iostream>
using namespace std;


int main(){
    long int t;
    long int n;
    cout << "\nNhap n = ";
    cin >> n;


    for(long int i = 2; i <= n; i++)   {
            t=0;
            for (long int j=2;j<i;j++){
              if (i%j==0) {
                t++;
              }
            }
            if (t==0) {
            while(n % i == 0){
            n /= i;
            cout<<i;
            if (n>1) cout <<" x ";
                }
            }
        }


return 0;
}
