#include <iostream>
using namespace std;
int main()
{
	int a;
	int  b;
	int c;


	do
	{
		cout << "Insereix el valor del nombre al que s'ha de fer el sumatori: ";
		cin >> c;
		if (c <= 0)
		{
			cout << "Error: el valor ha de ser mes gran que zero" << endl;
		}
	} while (c <= 0);

	a = 1;
	b = 0;

	do
	{
		b = b + a;
		a++;
	} while (a <= c);


	cout << "El sumatori de " << c << " es: " << b;
}