#include <iostream>

using namespace std;

int main()
{
    float s = 0.0 ;

    int n;
    cin>>n;
    for (float i = 1; i <= n; i++)
    {
        s = s + i/(i+1);
    }
    cout<<s;
    return 0;
}
