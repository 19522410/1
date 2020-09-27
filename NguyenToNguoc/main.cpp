#include <iostream>

using namespace std;

int main()
{
    int n,d;
    cout<<"Nhap mot so N: ";
    cin>>n;

    for(int i=n-1;i>1;i--){
        if (n%i==0){
                d=0;

                for (int j=i-1;j>=2;j--){

                    if (i%j == 0){
                        d++;
                    }
                }


                if (d==0)
                    {
                        cout<<i<<"*";

                    }



                n=n/i;
        }


    }
    return 0;
}
