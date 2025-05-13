#include <iostream>
#include <time.h>

using namespace std;
int main()
{
	int a, res,cont;
	char tr;
	tr = 'S';

	while (tr == 'S')
	{
		srand((unsigned)time(NULL));
		a = 11;
		cont = 0;
		

		while ((a > 10) || (a < 0))  // creacio num aleatori
		{
			a = rand();
		}

		do
		{
			cout << "Quin numero creus que es? ";
			cin >> res;
			

			if ((res > 10) || (res < 1))
			{
				cout << "Error: Valor fora del rang 1-10";
			}
			if ((res > a) && (res > 0) && (res <=10))
			{
				cout << "El numero a endevinar es mes petit" << endl;
				cont++;
			}
			if ((res < a) && (res > 0) && (res <=10))
			{
				cout << "El numero a endevinar es mes gran" << endl;
				cont++;
			}
			if (res == a)
			{
				cont++;
				cout << "Has guanyat!!! Has encertat en " << cont << " intents" << endl;
				break;
			}

		} while ((cont < 5));


		if (a != res)
		{
			cout << "Has perdut: El numero el numero secret era " << a << endl;
		}
		
		cout << "Vols tornar a jugar? ";
		cin >> tr;
	
	}
}