#include <iostream>
#include<math.h>

using namespace std;
float tong(int n) {
    float s=0;
for( int i = 0 ; i < n ; i++) {

        s =  sqrt(s+tong(n-i));
}

return s;
}

int main()
{
    int n;
    float t;
    cin>>n;
    {
        cin>>n;
    } while ( n < 10)

    cout<< tong(n);
    return 0;
}
