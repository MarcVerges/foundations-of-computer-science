#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int d;
	
	cout << "Introduiex els 4 nombres diferents: ";
	cin >> a >> b >> c >> d;

	if ((a > b) && (a > c) && (a > d))
	{
		cout << "El numero mes gran de la serie es " << a;
	}

	else
	{
		if ((b > a) && (b > c) && (b > d))
		{
			cout << "El numero mes gran de la serie es " << b;
		}

		else
		{
			if ((c > a) && (c > b) && (c > d))
			{
				cout << "El numero mes gran de la serie es " << c;
			}

			else
			{
				cout << "El numero mes gran de la serie es " << d;
			}
		}
	}

	cout << ". Comparacions: 3";
}
