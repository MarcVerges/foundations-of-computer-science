#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Introduiex el nombre del que vols el suamtori: ";
	cin >> a;

	b = 1;
	c = 0;


	do
	{
		cout << "Error: el valor ha de ser mes gran que zero" << endl;
		cout << "Introduiex el nombre del que vols el suamtori: ";
		cin >> a;

	} while (a <= 0);

	while (b <= a)
	{
		c = c + b;
		b++;
	}

	cout << "El sumatori de " << a << " es: " << c;
}