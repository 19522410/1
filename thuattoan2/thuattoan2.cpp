// thuattoan2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<ctime>
using namespace std;
void Nhap(int a[], int& n)
{
	srand(time(NULL));
	cout << "n?";
	cin >> n;
	for (int i = 0; i < n; i++)
	{

		a[i] = rand() % 50 + 1;
	}
}
void Xuat(int a[], int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
void doicho(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}
void QS(int a[],int l,int r)
{
	int m = (l + r) / 2;
	int x = a[m];
	int i = l;
	int j = r;
	while (i<=j)
	{
		while (a[i] < x) i++;
		while (a[j] > x) j--;
		if (i <= j)
		{
			doicho(a[i], a[j]);
			i++;
			j--;
		}
	}
	if (l < j) QS(a, l, j);
	if (r > i) QS(a, i, r);
}

int main()
{
	int a[100], n;
	Nhap(a, n);
	Xuat(a, n);
	QS(a, 0, n-1);
	Xuat(a, n);
}

