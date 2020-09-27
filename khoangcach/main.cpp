#include <iostream>

using namespace std;
struct Diem {
        int x ;
        int y;
    }A,B;
 void Cmd(Diem A , Diem B){
    int da=0,db=0;
    da=A.x*A.x + A.y*A.y;
    db=B.x*B.x + B.y*B.y;
    if (da == db) cout<<"bang nhau";
    if (da > db) cout<<da<<"lon hon"<<db;
    if (db > da) cout << db <<"lon hon"<<da;

}

int main()
{

    cout<<"Nhap gia tri cua diem A ";
   cin>>A.x>>A.y;
    cout<<"\nNhap gia tri cua diem B ";
   cin>>B.x>>B.y;
    Cmd(A,B);
    return 0;
}
