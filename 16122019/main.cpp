#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,nn,m,x,ii,jj;
    vector<vector<int> > a;
    vector<int> aa;
    cin>>n>>m;
    for (int i =0 ; i< n ; i++){
        cin>>nn;
        //aa.clear();
        for (int j=0; j<nn;j++) {
            cin>>x;
            aa.push_back(x);
        }
        a.push_back(aa);

    }
    for (int i = 0 ; i < m; i++){
     cin>>ii>>jj;
    cout<<a[ii][jj]<<"\n";
    }


    return 0;
}
