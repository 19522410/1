#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int n,m,i;
    cout<<"Nhap gia tri m va n : "<<endl;
    cin>>m>>n;
    i=m*n;
    while ( i >= 1){
        if (m%i==0 && n%i==0){
            cout<<i<<endl;
            break;

        }
        else i--;
    }
    return 0;
}
