#include <iostream>

using namespace std;
struct Poin {
int x,y;
            } A,B;
int Cmp ( Poin A , Poin B) {
    int da = A.x*A.x + A.y*A.y ;
    int db = B.x*B.x + B.y*B.y ;
    if (da > db) return 1;
    if (da < db) return -1;
    return 0;


}
int main()
{
    cout << "Hello world!" << endl;
    cout << " nhap diem a\n";
    cin >>A.x>>A.y;
    cout << " nhap diem b /n";
    cin >> B.x >>B.y ;
    cout<< Cmp(A,B);

    return 0;
}
