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
void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;	
}

void SelectionSort(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[min] > a[j]) min = j;
		}
		if (min != i) swap(a[i], a[min]);
	}
}
void InsertSort(int a[], int n)
{
	int x;
	int pos;
	for (int i = 1; i < n; i++)
	{
		x = a[i];
		pos = i - 1;
		while ((pos>=0)&&(a[pos] > x))
		{
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
	}
}
void interchagne(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j]) swap(a[i], a[j]);
		}
	}
}
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	//SelectionSort(a, n);
	//InsertSort(a, n);
	interchagne(a, n);
	Xuat(a, n);
	
	return 0;

}


