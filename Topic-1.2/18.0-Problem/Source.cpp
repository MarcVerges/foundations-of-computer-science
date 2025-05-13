#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	a = 0;
	c = 0;
	d = 0;

	for (b = 1; b <= 5; b++)
	{
		cout << "Introdueix un num: ";
		cin >> a;
		if (a > 0)
		{
			c++;
		}
		if (a < 0)
		{
			d++;
		}
		
	}
	cout << "Positius: " << c << " - Negatius: " << d;
}