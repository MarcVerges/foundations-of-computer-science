#include <iostream>
using namespace std;
int main()
{
	float a, b, c, d, e, f;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;
	cout << "Itrodueix una nota: ";
	cin >> a;

	while ((a >= 0) && (a <= 10))
	{
		if (a < 5)
		{
			b++;
		}
		if ((a >= 5) && (a < 7))
		{
			c++;
		}
		if ((a >= 7) && (a < 9))
		{
			f++;
		}
		if ((a >= 9) && (a < 10))
		{
			d++;
		}
		if (a == 10)
		{
			e++;
		}
		cout << "Itrodueix una nota: ";
		cin >> a;
	}

	cout << "S: " << b << " - A: " << c << " - N: " << f  << " - E: " << d << " - MH: " << e;
}