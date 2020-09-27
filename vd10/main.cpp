#include <iostream>

using namespace std;
class CDiem {
private:
    float x,y;
public:
    friend istream& operator >> (istream& , CDiem&);
    friend ostream& operator << ( ostream& , CDiem&);
};
class CDuongTron {
    private:
    CDiem a;
    int r;
    public:
    friend istream& operator >> (istream& , CDuongTron&);
    friend ostream& operator << ( ostream& , CDuongTron&);
};

int main()
{
    CDuongTron a;
    cin>>a;
    cout<<a;
    return 0;
}
istream& operator >> (istream& is, CDiem& a) {
    cout<<"\nx ?";
    is>>a.x;
    cout<<"\ny ?";
    is>>a.y;
    return is;
}
ostream& operator << ( ostream& os , CDiem& a) {
    os<<"\nHoanh do: "<<a.x;
    os<<"\nTung do: "<<a.y;
    return os;
}
istream& operator >> (istream& is, CDuongTron& q) {
    cout<<"\nNhap tam hinh tron: ";
    is>>q.a;
    cout<<"\nNhap ban kinh duong tron: ";
    is>>q.r;
    return is;
}
ostream& operator << ( ostream& os , CDuongTron& q) {
    os<<"\nTam duong tron: "<<q.a;
    os<<"\nBan kinh duong cau: "<<q.r;
    return os;
}
