// 19522410_CK.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;
class DTLuuTru
{
protected:
    char ten[100];
    int dd, mm;
    float dungluong=0;
public:
    virtual void Nhap()
    {
        return;
    }
    virtual void Xuat()
    {
        return;
    }
    virtual float TinhTongDungLuong()
    {
    return 0;
    }
    virtual int DemTapTin()
    {
        return 0;
    } 
    virtual int DemThuMuc()
    {
        return 0;
    }

};
class TapTin:public DTLuuTru
{
protected:

public:
    void Nhap()
    {
        cin.ignore();
        cout << "\nNhap ten tap tin: "; cin.get(ten,100);
        cout << "\nNhap ngay va thang tao tap tin: "; cin >> dd >> mm;
        cout << "\nNhap dung luong cua tap tin(Kb): "; cin >> dungluong;
    }
    void Xuat()
    {
        cout << "\nTen tap tin" << ten;
        cout << "\nNgay va thang tao tap tin: "<<  dd<<"/"<<  mm;
        cout << "\nDung luong cua tap tin(Kb): "<< dungluong;
    }
    float TinhTongDungLuong()
    {
        return dungluong;
    }
    int DemTapTin()
    {
        return 1;
    }
    int DemThuMUc()
    {
        return 0;
    }
};
class ThuMuc:public DTLuuTru
{
protected:
    DTLuuTru* ds[100];
    int n;
public:
    void Nhap()
    {
        cin.ignore();
        cout << "\nNhap ten thu muc: "; cin.get(ten, 100);
        cout << "\nNhap ngay va thang tao thu muc: "; cin >> dd >> mm;
        cout << "\nNhap so luong thanh phan trong thu muc: "; cin >> n;
        int loai;
        for (int i = 0; i < n; i++)
        {
            cout << "\nMoi nhap loai doi tuong luu tru: (1.Tap Tin; 2.Thu Muc)";
            cin >> loai;
            switch (loai)
            {
            case 1:
                ds[i] = new TapTin;
                break;
            case 2:
                ds[i] = new ThuMuc;
                break;
            }
            ds[i]->Nhap();
        }
    }
    float TinhTongDungLuong()
    {
        dungluong = 0;
        for (int i = 0; i < n; i++)
        {
            dungluong = dungluong + ds[i]->TinhTongDungLuong();
        }
        return dungluong;
    }
    void Xuat()
    {
        cout << "\nSo luong thanh phan trong thu muc: " << n;
        cout << "\nNgay thang tao thu muc: ";
        cout << "\nDung luong cua thu muc(Kb): " << dungluong;
        for (int i = 0; i < n; i++)
        {
            ds[i]->Xuat();
        }
    }
    int DemTapTin()
    {
        int d = 0;
        for (int i = 0; i < n; i++)
        {
            d = d + ds[i]->DemTapTin();
        }
        return d;
    }
    int DemThuMuc()
    {
        int d = 1;
        for (int i = 0; i < n; i++)
        {
            d = d + ds[i]->DemThuMuc();
        }
        return d;
    }
};
class Cay 
{
protected:
    int n;
    float Tongdungluong = 0;
    DTLuuTru* ds[100];
public:
    void Nhap()
    {
        cout << "\nNhap so luong thanh phan trong cay: "; cin >> n;
        int loai;
        for (int i = 0; i < n; i++)
        {
            cout << "\nMoi nhap loai doi tuong cay: (1.Tap Tin; 2.Thu Muc)";
            cin >> loai;
            switch (loai)
            {
            case 1:
                ds[i] = new TapTin;
                break;
            case 2:
                ds[i] = new ThuMuc;
                break;
            }
            ds[i]->Nhap();
        }
    }
    void Xuat()
    {
        for (int i = 0; i < n; i++)
        {
            ds[i]->Xuat();
        }
    }
    void TongDungLuongCay()
    {
        for (int i = 0; i < n; i++)
        {
            Tongdungluong = Tongdungluong + ds[i]->TinhTongDungLuong();
        }
        cout << "\nTong dung luong cua cay(Kb): "<<Tongdungluong;
    }
    void DemTapTin()
    {
        int d = 0;
        for (int i = 0; i < n ; i++)
        {
            d = d + ds[i]->DemTapTin();
        }
        cout << "\nSo tap tin trong cay: " << d;
    }
    void DemThuMuc()
    {
        int d = 0;
        for (int i = 0; i < n; i++)
        {
            d = d + ds[i]->DemThuMuc();
        }
        cout << "\nSo thu muc trong cay: " << d;
    }
};
int main()
{
    Cay t;
    t.Nhap();
    cout << "\n***********************************************\n";
    t.TongDungLuongCay();
    t.Xuat();
    t.DemTapTin();
    t.DemThuMuc();
}

