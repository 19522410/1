#include<iostream>
using namespace std;
class QuanCo
{
protected:
	bool mau;
public:
	virtual void CachDi() = 0;
};
class QuanTuong : public QuanCo
{
public:
	QuanTuong(bool loai)
	{
		mau = loai;
	}
	void CachDi()
	{
		cout << "\nDi tung o mot di ngang hoac doc Tuong luon luon phai o trong pham vi cung va khong duoc ra ngoai Cung tuc la hinh vuong 2X2 duoc danh dau bang duong cheo hinh chu X\n";
	}
};
class QuanXe : public QuanCo
{
public:
	QuanXe(bool loai)
	{
		mau = loai;
	}
	void CachDi()
	{
		cout << "\nDi ngang hay doc tren ban co mien la dung bi quan khac can duong tu diem di den diem den\n";
	}
};
class BanCo
{
protected:
	QuanCo* qc[10][9];
public:
	BanCo()
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				qc[i][j] = NULL;
			}
		}
		// 1 la co trang; 2 la co den
		qc[0][4] = new QuanTuong(1);
		qc[9][4] = new QuanTuong(0);
		qc[0][0] = new QuanXe(1);
		qc[0][8] = new QuanXe(1);
		qc[9][0] = new QuanXe(0);
		qc[9][8] = new QuanXe(0);
	}
	void XuatCachDi()
	{
		int x, y;
		cout << "Nhap vi tri ma muon xuat cach di cua quan co do: \n"; cin >> x >> y;
		if (qc[x][y] == NULL )
		{
			cout << "\nVi tri nhap khong co quan co\n";
			return;
		}
		qc[x][y]->CachDi();
	}
};
int main()
{
	BanCo t;
	t.XuatCachDi();
}