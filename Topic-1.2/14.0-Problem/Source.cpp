#include <iostream>
using namespace std;
int main()
{
	int a, b, max, min;
	b = 0;
	cout << "Intorduiex el num: ";
	cin >> a;
	b++;
	min = a;
	max = a;

	while ((a >= 0) && (b <= 10))
	{
		if (a > max)
		{
			max = a;
		}
		if (a < min)
		{
			min = a;
		}
		cout << "Intorduiex el num: ";
		cin >> a;
		b++;
	}

	if ((b == 1) && (a < 0))
	{
		cout << "No hi ha nombres a la sequencia";
	}
	else
	{
		cout << "Maxim: " << max << " -Minim: " << min;
	}
}