#include <iostream>

using namespace std;
class CPoin {
private:
    int x, y;
public:
    CPoin();
    CPoin(int, int);
    CPoin(CPoin&);
    ~CPoin();
    friend istream& operator >> (istream&, CPoin&);
    friend ostream& operator << (ostream&, CPoin&);

};


int main()
{
    CPoin a;
    //cin>>a;
    cout << a;
    CPoin b(1, 3);
    cout << b;
    CPoin c(a);
    cout << c;
    return 0;
}
istream& operator >> (istream& is, CPoin& b) {
    cout << "Nhap x: ";
    is >> b.x;
    cout << "\nNhap y: ";
    is >> b.y;
    return is;
}
ostream& operator << (ostream& os, CPoin& b) {
    os << "\nX: " << b.x;
    os << "\nY: " << b.y;
    return os;

}
CPoin::CPoin() {
    x = 1;
    y = 2;
}
CPoin::CPoin( int xx, int yy){
    x = xx;
    y = yy;
}
CPoin::CPoin(CPoin& z) {
    x = z.x;
    y = z.y;
}
CPoin::~CPoin(){
return;
}
