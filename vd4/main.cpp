#include <iostream>

using namespace std;
class CSoPhuc {
private:
    int thuc,ao;
public:
    friend istream& operator >> (istream& , CSoPhuc&);
    friend ostream& operator << (ostream& , CSoPhuc&);

};


int main()
{
    CSoPhuc a;
    cin>>a;
    cout<<a;

    return 0;
}
istream& operator >> (istream& is , CSoPhuc &b) {
    cout<<"Nhap phan thuc";
    is>>b.thuc;
    cout<<"\nNhap phan ao: ";
    is>>b.ao;
    return is;
}
ostream& operator << (ostream& os , CSoPhuc &b) {
    os<<"Phan thuc: "<<b.thuc;
    os<<"\nPhan ao: "<<b.ao;
    return os;
}
