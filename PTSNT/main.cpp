#include <iostream>
using namespace std;


int main(){
    int n,d=0;
    cout << "\nNhap n = ";
    cin >> n;

    for (int i=n-1;i >=2 ;i--) {
            while (n%i==0) {
                for (int j=2;j<i;j++){
                    if (i%j==0) {
                            d++;
                }
                }

                if (d==0){
                cout<<i;
                n=n/i;
                if ( n > 1) cout<<"*";
            }

            i--;
            }
    }

return 0;
}

