#include <iostream>

using namespace std;
class CDiemxyz {
private:
    float x,y,z;
public:
    friend istream& operator >> (istream& , CDiemxyz&);
    friend ostream& operator << ( ostream& , CDiemxyz&);
};
class CHinhCau {
    private:
    CDiemxyz a;
    int r;
    public:
    friend istream& operator >> (istream& , CHinhCau&);
    friend ostream& operator << ( ostream& , CHinhCau&);
};

int main()
{
    CHinhCau a;
    cin>>a;
    cout<<a;
    return 0;
}
istream& operator >> (istream& is, CDiemxyz& a) {
    cout<<"\nx ?";
    is>>a.x;
    cout<<"\ny ?";
    is>>a.y;
    cout<<"\nz ?";
    is>>a.z;
    return is;
}
ostream& operator << ( ostream& os , CDiemxyz& a) {
    os<<"\nHoanh do: "<<a.x;
    os<<"\nTung do: "<<a.y;
    os<<"\nCao do: "<<a.z;
    return os;
}
istream& operator >> (istream& is, CHinhCau& q) {
    cout<<"\nNhap tam hinh cau: ";
    is>>q.a;
    cout<<"\nNhap ban kinh hinh cau: ";
    is>>q.r;
    return is;
}
ostream& operator << ( ostream& os , CHinhCau& q) {
    os<<"\nTam hinh cau: "<<q.a;
    os<<"\nBan kinh hinh cau: "<<q.r;
    return os;
}
