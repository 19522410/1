
#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class CNhanVien
{
public:
	int LuongCoBan, Luong;
	int dd, mm, yy;
	char hoten[100];
public:
	virtual void Nhap()
	{
		cout << "\nLuong co ban: ? "; cin >>LuongCoBan;
		cout << "\nNgay thang nam sinh: ? "; cin >> dd >> mm >> yy;
		cout << "\nHo va ten: ? ";
		cin.ignore();
		cin.get(hoten, 100);
	}
	virtual void Xuat()
	{
		cout << "\nLuong co ban: " << LuongCoBan;
		cout << "\nNgay thang nam sinh: " << dd << "/" << mm << "/" << yy;
		cout << "\nHo va ten: " << hoten;
	}
	virtual int TinhLuong()
	{
		return Luong;
	};
};
class NhanVienVP : public CNhanVien
{
protected:
	
	int SoNgayLamViec, TroCap;
public:
	void Nhap()
	{
		cout << "\nNHAP THONG TIN NHAN VIEN VAN PHONG:\n";
		CNhanVien::Nhap();
		cout << "\nSo ngay lam viec: ? "; cin >> SoNgayLamViec;
		cout << "\nTro cap: ? "; cin >> TroCap;
		cout << endl;
	}
	void Xuat()
	{
		cout << "\nLuong co ban: " << LuongCoBan;
		cout << "\nNgay thang nam sinh: " << dd << "/" << mm << "/" << yy;
		cout << "\nHo va ten: " << hoten;
		cout << "\nSo ngay lam viec: "<< SoNgayLamViec;
		cout << "\nTro cap: "<< TroCap;
		cout << "\nLuong: " << TinhLuong()<<endl;

	}
	int TinhLuong()
	{
		Luong = 0;
		Luong = LuongCoBan + SoNgayLamViec * 100000 + TroCap;
		return Luong;
	}
};
class NhanVienSX : public CNhanVien
{
protected:
	int SoSanPham;
public:
	void Nhap()
	{
		cout << "\nNHAP THONG TIN NHAN VIEN SAN XUAT:\n";
		CNhanVien::Nhap();
		cout << "\nSo san pham: ? "; cin >> SoSanPham;
		cout << endl;
	}
	void Xuat()
	{
		cout << "\nLuong co ban: " << LuongCoBan;
		cout << "\nNgay thang nam sinh: " << dd << "/" << mm << "/" << yy;
		cout << "\nHo va ten: " << hoten;
		cout << "\nSo san pham: " << SoSanPham;
		cout << "\nLuong: " << TinhLuong() << endl;
	}
	int TinhLuong()
	{
		Luong = 0;
		Luong = LuongCoBan + SoSanPham*2000;
		return Luong;
	}
};
class NhanVienQL :public CNhanVien
{
private:
	int HeSoChucVu, Thuong;
public:
	void Nhap()
	{
		cout << "\nNHAP THONG TIN NHAN VIEN SAN XUAT:\n";
		CNhanVien::Nhap();
		cout << "\nHe so chuc vu: ? "; cin >> HeSoChucVu;
		cout << "\nThuong: ? "; cin >> Thuong;
		cout << endl;
	}
	void Xuat()
	{

		CNhanVien::Xuat();
		cout << "\nHe so chuc vu:  "<< HeSoChucVu;
		cout << "\nThuong:  "<< Thuong;
		cout << "\nLuong: " << TinhTong() << endl;
	}
	int TinhTong()
	{
		Luong = 0;
		Luong = LuongCoBan*HeSoChucVu + Thuong;
		return Luong;
	}
};

class CongTy :public CNhanVien
{
private :
	CNhanVien *n[100];
	int Tong;
public:
	void Nhap(int &n,int &m,int &l)
	{
		int i = 0;
		cout << "\nNhap so nhan vien van phong: "; cin >> n;
		while (i < n)
		{
			this->n[i] = new NhanVienVP;
			this->n[i]->Nhap();
			i++;
		}
		cout << "\nNhap so nhan vien san xuat: "; cin >> m;
		int q= m + i;
		while (i < q)
		{
			this->n[i] = new NhanVienSX;
			this->n[i]->Nhap();
			i++;			
		}
		cout << "\nNhap so nhan vien quan ly: "; cin >> l;
		q = q + l;
		while (i < q)
		{
			this->n[i] = new NhanVienQL;
			this->n[i]->Nhap();
			i++;
		}
	}
	void Xuat(int n, int m,int l)
	{
		int j = 1;
		for (int i = 0; i < (m+n+l);i++)
		{		
			cout << "\nNHAN VIEN "<<j<<":";
			this->n[i]->Xuat();
			j++;
		}
	}
	int TongLuong(int n, int m, int l)
	{
		Tong = 0;
		int i = 0;
		while (i < (m + n + l))
		{
			Tong += this->n[i]->TinhLuong();
			i++;
		}
		return Tong;
	}
	void TimKiem(int n, int m, int l, char x[])
	{
		int i = 0;
		while (i < (m + n + l))
		{
			if ((strcmp(x, this->n[i]->hoten)) == 0)
			{
				this->n[i]->Xuat();
			}
			i++;
		}
		if((m + n + l)==0) cout << "\nKhong co nhan vien can tim";
		if (i > (m + n + l)) cout << "\nKhong co nhan vien can tim";
	}
};

int main()
{
	int m, n,l;
	char x[100];
	CongTy t;
	t.Nhap(n,m,l);
	t.Xuat(n,m,l);
	cout << "\nTong luong cua cong ty: " << t.TongLuong(n, m, l);
	cout << "\nNhap ten nhan vien can tim: ";
	cin.ignore();
	cin.get(x, 100);
	t.TimKiem(n, m, l, x);
	return 0;
}
