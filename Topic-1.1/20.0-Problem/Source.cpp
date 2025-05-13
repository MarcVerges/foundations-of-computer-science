#include <iostream>
using namespace std;
int main()
{
	int dd, mm, aa, b;
	char a;
	cout << "Introduiex una data en format (DD/MM/AA): ";
	cin >> dd >> a >>  mm >> a >> aa;

	switch (mm)
	{
	    case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			if ((dd > 0) && (dd <= 31))
			{
				cout << "Data correcta";
		    }
			else
			{
				cout << "Error: Dia incorrecte";
			}
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			if ((dd > 0) && (dd <= 30))
			{
				cout << "Data correcta";
			}
			else 
			{
				cout << "Error: Dia incorrecte";
			}
			break;
		}
		case 2:
		{
			if ((0 == aa % 4 ) && (0 != aa % 100) || (0 == aa % 400))
			{
				b = 29;
			}
			else
			{
				b = 28;
			}
			if ((dd > 0) && (dd <= b))
			{
				cout << "Data correcta";
			}
			else
			{
				cout << "Error: Dia incorrecte";
			}
			break;
		}
		default:
		{
			cout << "Error: Mes incorrecte";
			break;
		}
	}
}