#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> a;
    int n;
    cin>>n;
    int t;
    for (int i=0;i<n;i++){
        cin>>t;
        a.push_back(t);
    }

    }
int c,b,x;

cin>>x;

cin>>c>>b;
a.erase(a.begin()+(x-1));
a.erase(a.begin()+(c-1),a.begin()+ (b-1));
cout<<a.size()<<endl;
for(int i=0;i < a.size() ;i++){

    cout<<a[i]<<" ";
}
    return 0;
}
