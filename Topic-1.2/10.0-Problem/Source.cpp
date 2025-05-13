#include <iostream>
using namespace std;
int main()
{   // DEFINICIO VARIABLES
	float a, b, c;
	int d;
	char e;
	e = 'S';
	cout << "Introduiex dos nombres reals: " << endl;
	cin >> a >> b;
	
	//PROCES
	do
	{
		cout << "        MENU" << endl << "      1.-Suma" << endl <<
		"      2.-Resta" << endl << "      3.-Producte" << endl << "      4.-Divisio" << endl << "      5.- Sortir" << endl << " Selecciona una de les opcions : ";
		cin >> d;

		switch (d)
		{
			case 1:
			{
				c = a + b;
				cout << a << " + " << b << " = " << c << endl;
				break;
			}
			case 2:
			{
				c = a - b;
				cout << a << " - " << b << " = " << c << endl;
				break;
			}
			case 3:
			{
				c = a * b;
				cout << a << " x " << b << " = " << c << endl;
				break;
			}
			case 4:
			{
				if (b == 0)
				{
					cout << "Error: Divisio per zero.";
				}
				else
				{
					c = a / b;
					cout << a << " : " << b << " = " << c << endl;
				}
			    break;
			}
			case 5:
			{
				cout << "Vols operar amb altres operands? (S/-)";
				cin >> e;
				if (e == 'S')
				{
					cout << "Introduiex dos nombres reals: ";
					cin >> a >> b;
				}
				break;
			}
			default:
			{
				cout << "Error: Opcio no valida";
				break;
			}
		}
	} while (e == 'S');
}