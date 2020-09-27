#include <iostream>

using namespace std;

void HoanDoi(int &a,int b) {
    a=4;
    b=5;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout << "Hello world!" << endl;
    HoanDoi(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}
