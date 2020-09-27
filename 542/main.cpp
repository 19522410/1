#include <iostream>

using namespace std;
int tong(int n, int a, int b, int c) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if ( n == 3 ) return 3;

return tong(n-1,a,b,c) + tong(n-2,a,b,c) + tong(n-3,a,b,c);
}
int main()
{
    int n,a,b,c;
   cin>>n;
   cout<<endl;
   cin>>a>>b>>c;
   cout<<tong(n,a,b,c);
    return 0;
}
