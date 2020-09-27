#include <iostream>

using namespace std;

int main()
{   int n;
    cout<<"Moi nhap so phan tu mang"<<endl;
    cin>>n;
   int a[n];
   int i=0;
   while (i>n) {
    cout<<"A["<<i<<"]= ";
    cin>>a[i];
   }

  /*for (int i=0 ; i<n ; i++) {
       cout<<"A["<<i<<"]= ";
        cin>>a[i];
   }
   int s=a[0];
   for (int i=1 ; i< n ; i++) {
        s= s+ a[i];
        }


   cout<<s;*/
    return 0;
}
