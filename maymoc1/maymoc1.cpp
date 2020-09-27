

#include <iostream>
using namespace std;
class CChiTiet
{
protected:
    int gia;
    int maso;
public:
  virtual  void Nhap()
    {
      return;
    }
  virtual   void Xuat()
    {
      return;
    }
  virtual  int TinhTien()
    {
      return 0;
    }
  virtual CChiTiet* TimKiem(int ms)
  {
      return NULL;
  }
  virtual int DemCTDon()
  {
      return -1;
  }
};
class CChiTietDon :public CChiTiet
{
protected:

public:
    void Nhap()
    {
        cout << "\nNhap ma so chi tiet don: "; cin >> maso;
        cout << "\nNhap gia tien chi tiet don: "; cin >> gia;

    }
    void Xuat()
    {
        cout << "\nMa so cua chi tiet don:" << maso;
        cout << "\nGia cua chi tiet don: " << gia;
    }
    int TinhTien()
    {
        return gia;
    }
    CChiTiet* TimKiem(int ms)
    {
        if (ms == maso) return this;
        return NULL;
    }
    int DemCTDon()
    {
        return 1;
    }
};
class CChiTietPhuc :public CChiTiet
{
protected:
    int n;
    CChiTiet* a[100];
    int loai;
public:
    void Nhap()
    {
        cout << "\nNhap ma so chi tiet phuc: "; cin >> maso;
        cout << "\nNhap so luong chi tiet: "; cin >> n;
        int i = 0;
        while (i < n)
        {
            cout << "\nNhap loai chi tiet may (1.Don, 2.Phuc): "; cin >> loai;
            switch(loai)
            {
            case 1:
                a[i] = new CChiTietDon;
                break;
            case 2:
                a[i] = new CChiTietPhuc;
                break;
            }
            a[i]->Nhap();
            i++;
        }
    }
    void Xuat()
    {
        cout << "\nMa so cua chi tiet phuc:" << maso;
        cout << "\nSo luong cua cac chi tiet trong chi tiet phuc: " << n;
        int i = 0;
        while (i < n)
        {
            a[i]->Xuat();
            i++;
        }       
    }
    int TinhTien()
    {
        int i = 0;
        gia = 0;
        while (i < n)
        {
            gia = gia + a[i]->TinhTien();
            i++;
        }
        return gia;
    }
    CChiTiet* TimKiem(int ms)
    {
        if (ms == maso) return this;
        int i = 0;
        while (i < n)
        {
            CChiTiet* kq = a[i]->TimKiem(ms);
            if (kq) return kq;
            i++;
        }
        return NULL;
    }
    int DemCTDon()
    {
        int i = 0;
        int dem = 0;
        while (i<n)
            {
                dem = dem + a[i]->DemCTDon();
                i++;
            }
        return dem;
    }
};
class CMay
{
protected:
    int n;
    int gia;
    CChiTiet* ds[100];
public:
    void Nhap()
    {
        cout << "\nNhap so luong chi tiet: "; cin >> n;
        int i = 0;
        while (i < n)
        {
            int loai;
            cout << "\nNhap loai chi tiet may (1.Don, 2.Phuc): "; cin >> loai;
            switch (loai)
            {
            case 1:
                ds[i] = new CChiTietDon;
                break;
            case 2:
                ds[i] = new CChiTietPhuc;
                break;
            }
            ds[i]->Nhap();
            i++;
        }
    }
    void Xuat()
    {

        cout << "\nSo luong cua cac chi tiet trong may: " << n;
        int i = 0;
        while (i < n)
        {
            ds[i]->Xuat();
            i++;
        }
    }
    int TinhTien()
    {

        int i = 0;
        gia = 0;
        while (i < n)
        {
            gia = gia+ ds[i]->TinhTien();
            i++;
        }
        return gia;
    }
    CChiTiet* TimKiem(int ms)
    {
        int i = 0;
        while (i < n)
        {
            CChiTiet* q = ds[i]->TimKiem(ms);
            if (q) return q;
            i++;
        }
        return NULL;
    }
    int DemCTDon()
    {
        int i = 0,dem = 0;
        while (i<n)
        {
            dem = dem + ds[i]->DemCTDon();
            i++;
        }
        return dem;
    }
};
int main()
{
    CMay t;
    int ms;
    t.Nhap();
    t.Xuat();
    cout <<"\nSo tien cua may: "<<endl<< t.TinhTien()<<endl;
    cout << "Nhap ma so can tim: "; cin >> ms;
    if (t.TimKiem(ms)) cout << "\nCo chi tiet trong may";
    else cout << "\nKhong tim thay chi tiet";
    cout << "\nSo chi tiet don co trong may: " << t.DemCTDon();
    return 0;
}

