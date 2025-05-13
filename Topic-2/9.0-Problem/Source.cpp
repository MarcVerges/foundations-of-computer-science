#include <iostream>
using namespace std;

int secu(int terme_1)
{
	int a = 0, b = 1, c = 0,i;

	for (i = 0; i < terme_1; i++)
	{
		a = b;
		b = c;
		c = b + a;
	}
		return c;
}


int main()
{
	int terme, res;

	do
	{
		cout << "Introdeuix el terme de la serie de fibonacci que vols calcular: ";
		cin >> terme;

		if (terme < 0)
		{
			cout << "Error:El nombre no pot ser negatiu" << endl;
		}
	} while (terme < 0);


	res = secu(terme);
	cout << "El terme " << terme << " de la serie de Fibonacci es " << res;
}