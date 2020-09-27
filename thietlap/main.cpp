#include <iostream>

using namespace std;
class CMeo {
private:
    float cao,nang;
public:
    CMeo();
    ~CMeo();
    void Xuat();
};


int main()
{
    CMeo a;
    a.Xuat();

    return 0;
}
CMeo::CMeo(){
cao= 2;
nang = 3;
}
CMeo::~CMeo() {
return;
}
void CMeo::Xuat(){
    cout<<"\nCao: "<<cao;
    cout<<"\nNang: "<<nang;
}
