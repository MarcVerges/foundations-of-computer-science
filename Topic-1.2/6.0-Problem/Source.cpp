#include <iostream>
using namespace std;
int main()
{
	float a, b;
	int c;
	b = 0;
	c = 0;

	do
	{
		cout << "Introdeuix un nombre:";
		cin >> a;
		
		if (a != 0)
		{
			b = b + a;
			c = c + 1;
		}	
		
	} while (a != 0);

	if (b == 0)
	{
		cout << "Error: La sequencia es buida. No es pot calcular la mitjana";
	}
	else
	{
		cout << "Mitjana dels nombres de la sequencia: " << (b /float (c));
	}
}