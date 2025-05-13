#include <iostream>
using namespace std;
int main()
{
	int a, b;
	b = 0;

	do
	{
		cout << "Introduiex un nombre: ";
		cin >> a;

		if ((a % 2 == 0) && (a != 0))
		{
			b++;
		}
	} while (a != 0);

	if (b == 0)
	{
		cout << "No hi ha cap nombre parell en la sequencia.";
	}
	else
	{
		cout << "Algun nombre de la sequencia es parell.";
	}
}