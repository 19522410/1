// okay.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a[6];
    int* p = a;
    a[0] = 5;
    for (int i = 1; i < 6; i++)
    {
        *(p + i) = *(p + i - 1)+i;
    }

}

