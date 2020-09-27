#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a = new int [n];
    for (int i = 0 ; i < n ; i++){
        cin>> a[i];
    }
    int max_diff = 0;
    int min_ = a[0];
    for (int i = 0 ;i < n ; i++) {
            if ((a[i]- min_) > max_diff) max_diff = (a[i]- min_);
            if  (min_ > a[i]) min_ = a[i];

    }



    cout<<max_diff;
    return 0;
}
