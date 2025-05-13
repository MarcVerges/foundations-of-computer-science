#include <iostream>
using namespace std;
int main()
{
	//1. variables
	int a;
	float x;
	float y;
	float res;
	
	//2. menu
		cout << "   MENU" << endl << "  1 - suma" << endl << "  2 - resta" << endl << "  3 - multiplicacio" <<
		endl << "  4 - divisio" << endl << "  5 - sortir" << endl << "  Selecciona una de les opcions: ";
	cin >> a;

	
	//3. variable no compresa
		if (a > 5)
		cout << "Error: Opcio no valida" << endl;

	
	//4. sortir calculadora
	if (a == 5)
	{
		cout << "sortint de la calculadora..." << endl;
	}

	
	
	//5 variable si compresa
	if (a < 5)
	{
		cout << "introduiex els dos operants: ";
		cin >> x >> y;
		cout << endl;

		//SUMA 
		if (a == 1)
		{
			res = x + y;
			cout << x << " + " << y << " = " << res <<endl;
		}


		//RESTA
		if (a == 2)
		{
			res = x - y;
			cout << x << " - " << y << " = " <<  endl;
		}

		//MULTIPLICACIO

		if (a == 3)
		{
			res = x * y;
			cout << x << " x " << y << " = " << res << endl;
		}

		//DIVISIO

		if (a == 4)
		{
			if (y <= 0)
				cout << "Error: Divisio per zero" << endl;
			else
			{
				res = x / y;
				cout << x << " : " << y << " = " << res << endl;

			}
		}
	}
}