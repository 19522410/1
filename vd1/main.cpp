#include <iostream>

using namespace std;
class CPoin {
private:
    int x,y;
public:
    friend istream& operator >> (istream& , CPoin&);
    friend ostream& operator << (ostream& , CPoin&);

};


int main()
{
    CPoin a;
    cin>>a;
    cout<<a;
    return 0;
}
istream& operator >> (istream& is , CPoin &b) {
    cout<<"Nhap x: ";
    is>>b.x;
    cout<<"\nNhap y: ";
    is>>b.y;
    return is;
}
ostream& operator << (ostream& os , CPoin &b) {
    os<<"X: "<<b.x;
    os<<"\nY: "<<b.y;
    return os;

}

