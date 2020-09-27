#include <iostream>

using namespace std;

void Doiso(int* a, int &b){
    *a=5;
    b=6;
    }



int main()
{
    int a=3,b=4;

    Doiso(&a,b);
    cout<<"Gia tri cua a = "<<a;
    cout<<"\nGia trị cua b = "<<b;
    return 0;
}
