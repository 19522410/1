#include <iostream>

using namespace std;
void swap(double *&pa , double *&pb) {

    double temp = *pa;
            *pa = *pb;
            *pb =  temp;
}
int main()
{
    double a=5.5 ;
    double b = 10.2;
    swap(a,b);
    cout<<"a="<<a<<"\n";
    cout<<"b="<<b;


    return 0;
}
