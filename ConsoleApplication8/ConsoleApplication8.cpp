

#include <iostream>
using namespace std;

class ChiTiet
{
protected:
    long MaSo;
    long giatien = 0;
public:
    virtual void Nhap() = 0;
    virtual void Xuat() = 0;
    virtual int TinhGiaTri() = 0;
    virtual int LaChiTietDon() = 0;
};
class CDon:public ChiTiet
{
protected:
    
public:
    void Nhap()
    {
        cout << "\nNhap chi tiet don:  ";
        cout << "\nNhap ma so chi tiet: "; cin >> MaSo;
        cout << "\nNhap gia tien chi tiet don: "; cin >> giatien;
    }
    void Xuat()
    {
        cout << "\nMa so chi tiet don: " << MaSo;
        cout << "\nGia tien chi tiet don: " << giatien;
    }
    int TinhGiaTri()
    {
        return giatien;
    }
    int LaChiTietDon()
    {
        return 1;
    }

};
class CPhuc :public ChiTiet
{
protected:
    ChiTiet* ds[100];
    int n;
public:
    void Nhap()
    {   
        cout << "\nNhap ma so chi tiet phuc: "; cin >> MaSo;
        cout << "\nNhap so luong chi tiet: "; cin >> n;
        for (int i = 0; i < n; i++)
        {
            int loai;
            cout << "\nNhap loai cua chi tiet (1.Don;2.Phuc): "; cin >> loai;
            switch (loai)
            {
            case 1:
                ds[i] = new CDon;
                break;
            case 2:
                ds[i] = new CPhuc;
                break;
            }
            ds[i]->Nhap();
        }
    }
    void Xuat()
    {
        cout << "\nMa so chi tiet phuc: " << MaSo;
        cout << "\nSo luong chi tiet: " << n;
        for (int i = 0; i < n; i++)
        {
            ds[i]->Xuat();
        }
    }
    int TinhGiaTri()
    {
        for (int i = 0; i < n; i++)
        {
            giatien = giatien + ds[i]->TinhGiaTri();
        }
        return giatien;
    }
    int LaChiTietDon()
    {
        int d=0;
        for (int i = 0; i < n; i++)
        {
             d = d + ds[i]->LaChiTietDon();
        }
        return d;
    }

};
class MayMoc
{
protected:
    int n;
    int giatri = 0;
    ChiTiet* ds[100];
public:
    void Nhap()
    {
        cout << "\nNhap so luong chi tiet cua may: "; cin >> n;
        for (int i = 0; i < n; i++)
        {
            int loai;
            cout << "\nNhap loai cua chi tiet (1.Don;2.Phuc): "; cin >> loai;
            switch (loai)
            {
            case 1:
                ds[i] = new CDon;
                break;
            case 2:
                ds[i] = new CPhuc;
                break;
            }
            ds[i]->Nhap();
        }
    }
    void Xuat()
    {
        cout << "\nSo luong chi tiet may : " << n;
        for (int i = 0; i < n; i++)
        {
            ds[i]->Xuat();
        }
    }
    void TinhGiaTriCuaMay()
    {
        for (int i = 0; i < n; i++)
        {
            giatri = giatri + ds[i]->TinhGiaTri();
        }
        cout << "\nGia tri cua may: " << giatri;
    }
    void SoChiTietDon()
    {
        int d = 0;
        for (int i = 0; i < n; i++)
        {
            d = d + ds[i]->LaChiTietDon();
        }
        cout << "\nSo chi tiet don co trong may :" << d;
    }
};

int main()
{
    MayMoc t;
    t.Nhap();
    t.Xuat();
    t.TinhGiaTriCuaMay();
    t.SoChiTietDon();
}

