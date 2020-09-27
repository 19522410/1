#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;
class CMachDien
{
protected:
    float r;
public:
 virtual   void Nhap()
 {      
     return;
 }
 virtual  float TinhDienTro()
    {
     return r;
    }
 virtual  void Xuat()
 {
     return;
 }
};
class CMNoiTiep:public CMachDien
{
protected:
    int n;
    CMNoiTiep* a[100];
public:
    void Nhap();
    float TinhDienTro();
    void Xuat();
};
class CMSongSong:public CMachDien
{
protected:
    int m;
    CMSongSong* b[100];
public:
    void Nhap();
    float TinhDienTro();
    void Xuat();
};
class CDTro:public CMachDien
{
protected:
    char Maso[100];
public:
    void Nhap();
    
    float TinhDienTro();
    void Xuat();
};

int main()
{
    CMachDien* t = NULL;
    int loai;
    cout << "Chon loai mach(1.Noi Tiep; 2.Song Song; 3.DienTro): "; cin >> loai;
    switch (loai)
    {
    case 1:
        t = new CMNoiTiep;
        break;
    case 2:
        t = new CMSongSong;
        break;
    case 3:
       t = new CDTro;
        break;
    }
    t->Nhap();
    t->TinhDienTro();
    t->Xuat();
    return 0;
}
void CMNoiTiep::Nhap()
{
    cout << "\nNhap so luong mach noi tiep:"; cin >> n;
    cout << "Nhap r : "; cin >> r;
    for (int i = 0; i < n; i++)
    {
        a[i] = new CMNoiTiep;
        a[i]->Nhap();
    }
}
float CMNoiTiep::TinhDienTro()
{
    for (int i = 0; i < n; i++)
    {
        r = r + a[i]->TinhDienTro();
    }
    return r;
}
void CMNoiTiep::Xuat()
{
    cout << "\nDien tro cua mach la " << r;
}
void CDTro::Nhap()
{
    cout << "\nNhap ma so thiet bi "; cin.getline(Maso, 100);
    cout << "Nhap r: "; cin >> r;
}
float CDTro::TinhDienTro()
{
    return r;
}
void CDTro::Xuat()
{
    cout << "\nDien tro cua mach la: " << r;
    cout << "\nMa so thiet bi: " << Maso;
}
float CMSongSong::TinhDienTro()
{
    for (int i = 0; i < m; i++)
    {
        r = 1/r + b[i]->TinhDienTro();
    }
    return 1 / r;
}
    void CMSongSong::Nhap()
{
        cout << "Nhap r: "; cin >> r;
    cout << "\nNhap so luong mach song song:"; cin >> m;
    for (int i = 0; i < m; i++)
    {
        b[i] = new CMSongSong;
        b[i]->Nhap();
    }
}
        void CMSongSong::Xuat()
            {
        cout << "\nDien tro cua mach la " << r;
            }
