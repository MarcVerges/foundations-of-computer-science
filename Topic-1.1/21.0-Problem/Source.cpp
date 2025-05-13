#include <iostream>
using namespace std;
int main()
{
//variables
	int a;
	float x;
	float y;
	float res;
// menu

	cout << "   MENU" << endl << "  1 - suma" << endl << "  2 - resta" << endl << "  3 - multiplicacio" <<
	endl << "  4 - divisio" << endl << "  5 - sortir" << endl << "  Selecciona una de les opcions: ";

	cin >> a;

// variable no compresa

	if (a > 5)
		cout << "Error: Opcio no valida" << endl;

	//sortir calculadora

	if (a == 5)
	{
		cout << "sortint de la calculadora..." << endl;
	}

// variable si compresa

	if (a < 5)
	{
		cout << "introduiex els dos operants: ";
		cin >> x >> y;
		cout << endl;
	}


//entrar calculadora
//suma

	if (a == 1)
	{
		res = x + y;
		cout << res << " = " << x << " + " << y << endl;
	}
// resta

	if (a == 2)
	{
		res = x - y;
		cout << res << " = " << x << " - " << y << endl;
	}
// multiplicacio

	if (a == 3)
	{
		res = x * y;
		cout << res << " = " << x << " x " << y << endl;
	}

// divisio

	if (a == 4)
	{
		if (y <= 0)
			cout << "Error: Divisio per zero" << endl;
		else 
		{
			res = x / y;
			cout << res << " = " << x << " : " << y << endl;
		
		}
	}

}