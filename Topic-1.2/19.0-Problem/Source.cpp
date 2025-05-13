#include <iostream>
using namespace std;
int main()
{
	//ins
	int min, max;
	int res1, res2, res3;
	int a,b,c,d;
	res1 = 0;
	res2 = 1;
	res3 = 0;
	d = 0;

	//out1
	cout << "Introduiex el minim: ";
	cin >> min;
	cout << "Introdueix el maxim: ";
	cin >> max; 

	//porces1
	for (a = min; a <= max; a++)
	{
		if (a % 2 == 0)
		{
			res1 = res1 + a;
		}
	}
	//proces2
	for (b = min; b <= max; b++)
	{
		if (b % 2 == 0)
		{
			res2 = res2 * b;
		}
	}
    //proces3
	for (c = min; c <= max; c++)
	{
		if (c % 2 == 0)
		{
			res3 = res3 + c;
			d++;
		}
	}
	//out final
	cout << "Suma: " << res1 << " - Producte: " << res2 << " - Mitjana: " << (float(res3)/d);
}
