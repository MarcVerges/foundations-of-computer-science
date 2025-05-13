#include <iostream>
#include <string.h>
#define dim 15

using namespace std;
int main()
{
	char v1[dim];
	char v2[dim];
	char v3[dim];
	int res = 0;
	int res1 = 0;
	int res2 = 0;


	cout << "Introdeuix la primer cadena: ";
	cin >> v1;
	cout << "Introdeuix la segona cadena: ";
	cin >> v2;
	cout << "Introduiex la tercera cadena: ";
	cin >> v3;
	cout << "Cadenes introduides: " << v1 << " " << v2 << " " << v3 << endl;

	if ( strcmp(v1, v2) == 0)
	{
		res++;
	}
	if (strcmp(v1, v3) == 0)
	{
		res2++;
	}
	if (strcmp(v3, v2) == 0)
	{
		res1++;
	}


	if ((res1 == 1) && (res == 1)  && (res2 == 1))
	{
		cout << "Les tres cadenes son iguals";
	}
	else
	{
		if ((res1 == 1) && (res == 0) && (res2 ==0))
		{
			cout << "Les cadenes 2 i 3 son iguals";
		}
		else
		{
			if ((res1 == 0) && (res == 1) && (res2 == 0))
			{
				cout << "Les cadenes 1 i 2 son iguals";
			}
			else
			{
				if ((res1 == 0) && (res == 0) && (res2 == 1))
				{
					cout << "Les cadenes 1 i 3 son iguals";
				}
				else
				{
					cout << "“Les tres cadenes son diferents";
				}
			}
		}
	}
}