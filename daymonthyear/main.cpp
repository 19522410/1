#include <iostream>

using namespace std;
    bool TestYear(int y) {
        if (y %4 != 0) return 0;
            else if ((y % 4 == 0) && (y % 100 != 0)) return 1;
                else if ((y % 4 == 0) && (y % 100 == 0) && (y % 400 == 0)) return 1;
                    else return 0;
}
    int DayInMonth(int m ,int y) {
        int nDay;
        switch (m) {
            case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
                nDay = 31;
                break;
            case 4 : case 6 : case 9 : case 11 :
                nDay = 30;
            case 2 :
                if (TestYear(y) == 1) nDay =29;
                else nDay = 28;
                break;
            }
         return nDay;
    }
    int TinhNgayTiepTheo(int& d, int& m, int& y) {
        if  ((d < DayInMonth(m,y))) d++;
        else if  ((d == DayInMonth(m,y)) && (m<12)) {d=1;m++;}
       else  if   ((d == DayInMonth(m,y)) && (m=12)) {
            d=1;m=1;y++;
        }
    }
int main()
{   int d,m,y;
    bool test;
    cout << "Moi nhap ngay thang nam" << endl;
    cin>>d>>m>>y;
    //cin>>y;
    cout<<"\n";
    //test = TestYear(y);
//cout <<test;
    TinhNgayTiepTheo(d,m,y);
    cout<<d<<"/"<<m<<"/"<<y;
    return 0;
}
