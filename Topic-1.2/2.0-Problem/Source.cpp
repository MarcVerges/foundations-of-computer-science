#include <iostream>
using namespace std;
int main()
{
	int a, b;
	a = 1;
	b = 0;


	while(a <= 10)
	{
		b = b + a;
			a++;
	}
	cout << b;
}