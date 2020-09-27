#include <iostream>
using namespace std;
void Nhap(int a[], int &n){
 cout<<"Nhap so nguyen n=";
cin>>n;
for(int i=0; i<n; i++)
{ cout<<"Nhap a["<<i<<"]= ";
cin>>a[i];
}
}
int test(int n) {
    if (n<2) return 0;
    for (int i = 2 ; i < n ; i++) {
            if ((n % i) == 0)return 0;
    }
    return 1;


}
void InSoNguyenTo(int a[], int n) {
    for (int i = 0 ; i< n ; i++) {
        if (test(a[i])==1) cout<<a[i]<<" ";
    }

}
int main() {
int a[100];
int n;
Nhap(a,n);
InSoNguyenTo(a,n);


return 0;
}
