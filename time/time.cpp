
#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void InsertionSort(int a[],int n)
{
    int key, pos;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        pos = i - 1;
        while ((pos >= 0) && (a[pos] < key))
        {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = key;

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
    int min;
    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min]) min = j;
        }
        swap(a[i], a[min]);
    }
}
void InChargerSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) swap(a[i], a[j]);
    }
}
int main()
{
    int a[10];
    int n;
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        
        a[i] = rand() % (30);
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    SelectionSort(a, n);
    for (int i = 0; i < n; i++)
        cout<< a[i]<<" ";
    
}

