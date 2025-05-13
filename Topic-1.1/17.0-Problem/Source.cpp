#include <iostream>
using namespace std;
int main()
{
	float a, c;
	int b;

	cout << "Introdueix la cauantitat de euros a canviar i la moenda a la que ho vols canviar: (1 - Dolars(USD), 2 - Lliures(GBP), 3 - Francs suïssos(CHF), 4 - Yens(JPY)): ";
	cin >> a >> b;


	switch (b)
	{
		case 1:
		{
			c = a * 1.34;
			cout << a << " euros son " << c << " USD";
			break;
		}
		case 2:
		{
			c = a * 0.83;
			cout << a << " euros son " << c << " GBP";
			break;
		}
		case 3:
		{
			c = a * 1.23;
			cout << a << " euros son " << c << " CHF";
			break;
		}
		case 4:
		{
			c = a * 133.11;
			cout << a << " euros son " << c << " JPY";
			break;
		}
		default:
		{
			cout << " Error: moneda no disponible";
			break;
		}
	}
}