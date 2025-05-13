#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	c = 0;
	cout << "Introduiex el nombre del que vols fer el sumatori: ";
	cin >> a;

	while (a <= 0)
	{
		cout << "Error: el valor ha de ser mes gran que zero" << endl;
		cout << "Introduiex el nombre del que vols fer el sumatori: ";
		cin >> a;
	}

	for (b = 1; b <= a; b++)
	{
		c = c + b;
	}
	cout << "El sumatori de " << a << " es " << c;
}