#include <iostream>

using namespace std;

int main()
{
    int c,r;
    cout<<"Moi nhap so hang \n";
    cin>>r;
    cout<<"Moi nhap so cot \n";
    cin>>c;
    int a[r][c];

    for (int i=0; i < r;i++) {
            for (int j=0; j < c;j++){
                cin>>a[i][j];
                cout<<" ";

            }
            cout<<"\n";
    }
    /*for (int i=0; i < n;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i] < a[j]) {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }*/
    /*for (int i=0; i < n;i++) {

        cout<<a[i]<<" "
        ;
    }*/
     for (int i=0; i < c;i++) {
            for (int j=0; j < r;j++){

                cout<<a[j][i]<<"\t";
            }
            cout<<"\n";
    }
    int x;
    cout<<"ban muon xuat cot nao ";
    cin>>x;
    for (int i=0;i<r;i++){
        cout <<a[i][x];
        cout<<endl;
    }
    return 0;
}
