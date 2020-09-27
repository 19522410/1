#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int n=10;
    int x=0;
    int &x=n;
    cout<<x<<endl;
    x*=x;
    cout<<n<<endl;
    cout<<x+n;
    return 0;
}
