#include <iostream>

using namespace std;
int kt(int a[100],int n) {
int d = 0;
for (int i = 0 ; i < n;i++)
if ( a[i] < 0) d++;
if (d == n) return 1;
if (d == 0)
return 0;

}
void mangam (int a[], int &b[], int n) {
    for ( int i = 0 ; i < n ; i++) {
            int j = 0;
        if (a[i] < 0) b[j] = a[i] ;
        j++;
    }

}
int main()
{
    int a[100];
    int n;
    cin>>n;
    cout<<endl;
    for ( int i = 0 ; i < n ; i++) {
        cin>>a[i];
        cout<<" " ;
    }
 if (kt(a,n) == 0 ) {
        cout <<" mang khong co so am ";

 }
 int b[100];
 mangam(a,b,n);
 int maxx = b[0];
 for (int j = 1 ; j < n ; j++) {

    if (b[j] > maxx) maxx = b[j];

 }
 cout << maxx ;


    return 0;
}
