#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;

	a = 1;
	b = 0;

	do
	{
		b = b + a;
		a++;
	} while (a <= 10);

	cout << b;



}