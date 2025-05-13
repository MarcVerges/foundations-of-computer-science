#include <iostream>
using namespace std;
int main()
{
	float a;
	float b;
	float c;
	float d;

	cout << "Introduiex les notes de: teoria, seminaris i practiques: ";
	cin >> a >> b >> c;

	d = (0.4 * a) + (0.3 * b) + (0.3 * c);

	cout << "La nota final es " << d << " - ";

	if ((d >= 0) && (d <= 4.99))
	{
		cout << "SUSPES";
	}

	else
	{
		if ((d >= 5.00) && (d <= 6.99))
		{
			cout << "APROVAT";
		}

		else
		{
			if ((d >= 7.00) && (d <= 8.99))
			{
				cout << "NOTABLE";
			}

			else
			{
				if ((d >= 9.00) && (d <= 9.99))
				{
					cout << "EXCEL.LENT";
				}
				
				else 
					if (d == 10)
					{
						cout << "MATRICULA D'HONOR";
					}
				    
					else
					{
						cout << "Nombres no valids";
					}
			}
		}	
	}
}