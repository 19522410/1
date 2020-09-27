

#include <iostream>
using namespace std;
class Cdiem
{
public:
	~Cdiem();
	//Cdiem& operator= (const Cdiem&);
	friend ostream& operator<< (ostream&, Cdiem&);
	friend istream& operator>> (istream&, Cdiem&);

private:
	float x, y;
};

Cdiem::~Cdiem()
{
	return;

}

int main()
{
	Cdiem a, b;
	cin >> a;
	b = a;
	cout << b;

}
/*Cdiem& Cdiem :: operator= (const Cdiem& a)
{
	x = a.x;
	y = a.y;
	return *this;
}*/

	ostream& operator<<(ostream& os, Cdiem& a)
	{
		os << "Toa do diem: (" << a.x << "," << a.y << ")";
		return os;
	}
	istream& operator>> (istream& is, Cdiem& a)
	{
		cout << "Nhap x: ";
		is >> a.x;
		cout << "Nhap y: ";
		is >> a.y;
		return is;
	}
