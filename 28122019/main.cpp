#include <iostream>

using namespace std;
int tong(int n, int a, int b, int c) {
    int ans=0;
  if (n==1)  return a;
  if (n==2) return b+a;
  if (n==3)  return c+b+a;


    if (n > 3) {
        ans = a + b + c;
        ans =  tong(n-1,a,b,c) + tong(n-2, a, b,c);

    }

    return ans;

    }



int main()
{
    int n,a,b,c;
    cin>>n;
    cout<<endl;
    cin>>a>>b>>c;
    cout<< tong(n,a,b,c);

    return 0;
}
