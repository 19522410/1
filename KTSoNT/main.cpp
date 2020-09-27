#include <iostream>
int n;
using namespace std;
bool kiem_tra( int n)
{
int a= sqrt(n) ;
if( n<2 ) cout<<"NO";
else
{
if( n<4 ) cout<<"YES";
else
{
for( int i=2 , i<=a, i++)
{
if( n%i==0 )
{
cout<<"NO";
}
if( (i==a) && (n%i!=0)) cout<<"YES";
}
}
}
}
int main()
{
cin>>n;
kiem_tra(n);
return 0;
}
