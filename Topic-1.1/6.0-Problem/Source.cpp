#include <iostream>
using namespace std;
int main()
{
	int a;

	cout << " Menu " << endl << " " << endl << "1 - Opcio 1" << endl << "2 - Opcio 2" << endl << "3 - Opcio 3" << endl << " " << endl << "Premeu una tecla per seleccionar opcio: " << endl;
	cin >> a; 

	switch (a)
	{
	    case 1:
		{
			cout << "Fent tasca 1";
			break;
		}
		
		case 2:
		{
			cout << "Fent tasca 2";
			break;
		}
		
		case 3:
		{
			cout << "Fent tasca 3";
			break;
		}

		default:
		{
			cout << "Opcio incorrecta";
			break;
		}
	}
}