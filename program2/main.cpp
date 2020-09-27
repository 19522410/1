    #include <iostream>
    #include<math.h>


    using namespace std;

    int powmod(long int ,long int,long int );
    int main()
    {
         long int a,b,c;
        cin>>a>>b>>c;
        if (b==0) {
            cout<<1%c;
            return 0;
        }

        cout<<powmod(a,b,c);
        return 0;
    }

    int powmod(long int a, long int b,long int c) {
        if (b ==  1) return a%c;
        else {
            if ( b % 2 == 0) return powmod(a,b/2,c)%c * powmod(a,b/2,c)%c ;
        else
            if ( b % 2 == 1) return powmod(a,b/2,c)%c * powmod(a,b/2,c)%c * a%c;
        }


    }
