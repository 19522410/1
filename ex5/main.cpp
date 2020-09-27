#include <iostream>

using namespace std;
class CSoPhuc {
private:
    int thuc,ao;
public:
    CSoPhuc();
    CSoPhuc(int,int);
    CSoPhuc(const CSoPhuc&);
    ~CSoPhuc();
    friend istream& operator >> (istream& , CSoPhuc&);
    friend ostream& operator << (ostream& , CSoPhuc&);

};


int main()
{
    CSoPhuc a;
    CSoPhuc b(4,9);
    CSoPhuc c(a);
    //cin>>a;
    cout<<a<<b<<c;

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
    os<<"\n--------------------------\n";
    os<<"Phan thuc: "<<b.thuc;
    os<<"\nPhan ao: "<<b.ao;
    return os;
}
CSoPhuc::CSoPhuc(){
    thuc = 1;
    ao = 1;
}
CSoPhuc::CSoPhuc(int x,int y) {
    thuc = x;
    ao = y;
}
CSoPhuc::CSoPhuc(const CSoPhuc& a){
    thuc = a.thuc;
    ao = a.ao;

}
CSoPhuc::~CSoPhuc() {
return;
}
