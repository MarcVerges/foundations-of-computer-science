#include <iostream>
using namespace std;
int main()
{
	float a, b, c, d;
	cout << "Introdeuix num: ";
	cin >> a;

	b = 0;
	c = 0;

	while (a != 0)
	{
		b = b + a;
		c++;
		cout << "Introdeuix num: ";
		cin >> a;
	}
	if (b == 0)
	{
		cout << "Error: La sequencia es buida. No es pot calcular la mitjana.";
	}
	else
	{
		d = b / c;
		cout << "Mitjana dels nombres de la sequencia: " << d;
	}
}