#include <iostream>
using namespace std;
void find(int a, int& b, int& c)
{ int temp;
c = a + b;
temp = a;
a = b;
b = 2 * temp;
}
int main()
{
int one, two, three;
one = 5;
two = 10;
three = 15;
find(three, two, one);
cout << one << ", " << two << ", " << three << endl;
return 0;
}
