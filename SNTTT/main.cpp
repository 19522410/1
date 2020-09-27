#include <iostream>

using namespace std;

int main()
{  int d,s;
    cout<<"Nhap mot so N \n";
    for (int i = 2 ; i < n; i++ ) {
        for (int j = 2 ; j < i ; j++) {
            if (i%j==0) d++;
        }
        if d==0 s=s*i;
    }

    cout<<s;
    return 0;
}
