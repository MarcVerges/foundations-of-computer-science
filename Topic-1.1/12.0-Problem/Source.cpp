#include <iostream>
using namespace std;
int main()
{
	int a = 2022;
		int b;
		int c;

		cout << "Escriu el teu any de neixemen: ";
		cin >> b;

		c = a - b;

		if (c < 18)
		{
			cout << "Tens " << c << " anys i ets menor d'edat. ";
			
			if (c <= 12)
			{
				cout << "Encara no has acabat primaria";
			}
			else
			{
				cout << "Has acabat primaria";
			}
		}

		else
		{
			cout << "Tens " << c << " anys i ets major d'edat. " << endl;

				if (c < 67)
				{
					cout << "Estas en edat de treballar. ";

				}

				else
		        {
					cout << "Estas en edat de jubilacio. ";
				}
		}

}