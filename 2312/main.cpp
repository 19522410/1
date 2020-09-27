#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    float d=0,s=0;
    for (int i = 1 ; i<= n; i++) {
        s = sqrt(i+s);

    }
    cout<<s;
    return 0;
}
