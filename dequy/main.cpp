#include <iostream>

using namespace std;
int SoTho(int n) {
    int s;
    if (n <= 2) return 1;
    else
        s = SoTho(n-1)+ SoTho(n-2);
    return s;
}

int main()
{

    int n;
    cout<<"Nhap so nam can tinh";
    cin>>n;
    cout<<SoTho(n);
    return 0;
}
