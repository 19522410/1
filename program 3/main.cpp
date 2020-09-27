#include <iostream>

using namespace std;
 long int fi(int);
 long int fibo(int  n);

int main()
{
    int n;
    cin>>n;
    cout<<fi(n);
    return 0;
}

 long int fibo(int  n) {
     if (n == 0) return 0;
     if (n==1) return 1;
     return fibo(n-1) + fibo(n-2);

 }
 long int fi(int n){
    if (n==1) return 1;
    if (n==0) return 0;
    if (n%2==0) return fibo(n/2)%10^6 * (2*fibo(n/2+1)-fibo(n/2))%10^6;
    if (n%2==1) return (fibo(n/2+1)*fibo(n/2+1))%10^6 +  (fibo(n/2) *fibo(n/2))%10^6;
}

