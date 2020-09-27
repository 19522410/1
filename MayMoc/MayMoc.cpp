

#include <iostream>
using namespace std;
class Chitiet
{
public:
    int maso;
    int gia;
public:
    virtual  void Nhap()
    {
        cout << "Ma so: ?"; cin >> maso;
        cout << "\nGia: ?"; cin >> gia;
    }
    virtual  void Xuat()
    {
        cout << "\nGia cua chi  tiet: " << gia;
        cout << "\nMa so cua chi tiet: " << maso;
    }

    virtual int TinhTien()
    {
        return 0;
    }
    
};

class CDon : public Chitiet
{
public:
    void Nhap()
    {
        cout << "\nNhap Chi Tiet Don: ";
        Chitiet::Nhap();
    }
    void Xuat()
    {
        cout << "\nXuat Chi tiet Don";
        Chitiet::Xuat();
    }
    int TinhTien()
    {
        return gia;
    }
};
class CPhuc : public Chitiet
{
protected:
    int thanhphan;
    int thanhphandon;
    Chitiet* a[100];
    int tongtien;

public:
    void Nhap()
    {
        cout << "\nNhap chi tiet phuc: ";
        cout << "\nMa so chi tiet phuc: "; cin >> maso;
        cout << "\nSo luong chi tiet: ?"; cin >>thanhphan;
        cout << "\nSo luong chi tiet don: ?"; cin >> thanhphandon;
            int j = 0;
            while (j < thanhphandon)
            {
                this->a[j] = new CDon;
                this->a[j]->Nhap();
                j++;
            }
            while (j < thanhphan)
            {
                this->a[j] = new CPhuc;
                this->a[j]->Nhap();
                j++;
            }

        }
    void Xuat()
    {
        int i = 0;
        while (i < thanhphan)
        {
            cout << "\nXuat chi tiet phuc: ";
            cout << "\nSo luong chi tiet :" << thanhphan;
            cout << "\nSo luong chi tiet don: " << thanhphandon;
            cout << "\nMa so: " << maso;
            this->a[i]->Xuat();
            i++;
        }
    }
    int TinhTien()
    {
        tongtien = 0;
        int i = 0;
        while (i< thanhphan)
        {
            tongtien = tongtien + a[i]->TinhTien();
            i++;
        }
        return tongtien;
    }

};
class CMay
{
protected:
    int n;
    int m;
    Chitiet* ds[100];
public:
    void Nhap()
    {
        cout << "\nMAY: \n";
        cout << "\nSo luong chi tiet: ?"; cin >> n;
        cout << "\nSo luong chi tiet don: ?"; cin >> m;
        cout << "\nSo luong chi tiet phuc: " << n - m;
        int j = 0;
        while (j < m)
        {
            this->ds[j] = new CDon;
            this->ds[j]->Nhap();
            j++;
        }
        while (j < n)
        {
            this->ds[j] = new CPhuc;
            this->ds[j]->Nhap();
            j++;
        }

    }
    void Xuat()
    {
        int i = 0;
        while (i < n)
        {
            this->ds[i]->Xuat();
            i++;
        }
    }
    int TongTien()
    {
        int sum = 0;
        int i = 0;
        while (i < n)
        {
            sum = sum + (this->ds[i])->TinhTien();
            i++;
        }
        return sum;
    }
    Chitiet* TimKiem(int ms)
    {
        int i = 0;
        while (i < n)
        {
            if (ms == (ds[i]->maso)) 
        }
    }
    
};

int main()
{
    CMay t;
    t.Nhap();
    t.Xuat();
    cout << endl <<t.TongTien() << endl;
    cin >> x;


    
}

