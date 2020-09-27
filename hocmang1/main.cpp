#include <iostream>

using namespace std;

int main()
{
    int a[100],n,temp;
    cout<<"Nhap n";
    cin>>n;
    for (int i =0 ;i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    for (int i =0 ;i<n;i++){
        cout<<a[i]<<"\t";
    }

    for (int i=0; i<n-1;i++ ){
        for (int j=i+1;j<n;j++){
            if (a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<endl;
    for (int i =0 ;i<n;i++){
        cout<<a[i]<<"\t";}
    return 0;
}
