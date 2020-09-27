

#include <iostream>
using namespace std;
class Cdiemxyz
{
public:
	~Cdiemxyz();
	Cdiemxyz& operator= (const Cdiemxyz&);
	friend ostream& operator<< (ostream&, Cdiemxyz&);
	friend istream& operator>> (istream&, Cdiemxyz&);

private:
	float x, y, z;
};



Cdiemxyz::~Cdiemxyz()
{
	return;
}

int main()
{
	Cdiemxyz a, b;
	cin >> a;
	b = a;
	cout << b;

}
Cdiemxyz& Cdiemxyz :: operator= (const Cdiemxyz& a)
{
	x = a.x;
	y = a.y;
	z = a.z;
	return *this;
}

ostream& operator<<(ostream& os, Cdiemxyz& a)
{
	os << "Toa do diem: (" << a.x << "," << a.y << "," << a.z << ")";
	return os;
}
istream& operator>> (istream& is, Cdiemxyz& a) 
{
	cout << "Nhap x: ";
	is >> a.x;
	cout << "Nhap y: ";
	is >> a.y;
	cout << "Nhap z: ";
	is >> a.z;
	return is;

}
