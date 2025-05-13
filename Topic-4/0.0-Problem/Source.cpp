#include <iostream>
#include "Aleatori.h"
#include <time.h>
using namespace std;

int main()
{
	//CONSTANTS
	const int SUMA = 0;
	const int RESTA = 1;
	const int MULTIPLICACIO = 2;
	const int DIVISIO = 3;
	const int FACIL = 1;
	const int MIG = 2;
	const int DIFICIL = 3;
	srand((unsigned)time(NULL));
	//MINIMS I MAXS
	int min = 0, max, min_1 = 0, max_2;
	//operants
	int a, b;
	//operadors
	int c;
	//resultats
	float res;
	float res_1;
	//OPCIO DIFICULTAT
	int op = 0;
	//PUNTATJE
	int m, p = 0, i = 0,pi, pf;
	//booleana per sortir
	bool res_2;


	//menu principal
	do
	{
		cout << "Benvingut al Brain Training Game! Si us plau, selecciona una dificultat: " << endl;
		cout << "1 - Facil" << endl;
		cout << "2 - Mig" << endl;
		cout << "3 - Dificil" << endl;
		cin >> op;
		if ((op > 3) || (op < 1))
		{
			cout << "Seleccio incorrecta. Si us plau, selecciona una dificultat: " << endl;
		}

	} while ((op > 3) || (op < 1));

	//definicio de parametres segons difcultat
	switch (op)
	{
		case FACIL: 
		{
			max = 9;
			max_2 = 2;
			m = 8;
			break;
		}
		case MIG:
		{
			max = 99;
			max_2 = 2;
			m = 10;
			break;
		}
		case DIFICIL:
		{
			max = 999;
			max_2 = 3;
			m = 12;
			break;
		}
	}
	
	//bucle del joc
	do
	{
		c = Aleatori(min_1, max_2);
		a = Aleatori(min, max);
		b = Aleatori(min, max);

		switch (c)
		{
			case SUMA:
			{
				res = a + b;
				cout << a << " + " << b << " = " << endl;
				cin >> res_1;
				pi = 1;
				break;
			}
			case RESTA:
			{
				res = a - b;
				cout << a << " - " << b << " = " << endl;
				cin >> res_1;
				pi = 1;
				break;
			}
			case MULTIPLICACIO:
			{
				res = a * b;
				cout << a << " x " << b << " = " << endl;
				cin >> res_1;
				pi = 2;
				break;
			}
			case DIVISIO:
			{
				while (b == 0)
				{
					b = Aleatori(min, max);
				}
				res = float(a) / b;
				res = int(res * 10) / 10.0;
				cout << a << " : " << b << " = " << endl;
				cin >> res_1;
				pi = 3;
				break;
			}
			
		}

		res_2 = (res == res_1);

		if (res == res_1)
		{
			p = p + pi;
			i++;
			
		}

		pf = m * p;

	} while (res_2 != 0);

	//resposta final
	cout << "Has aconseguit encadenar " << i << " respostes correctes amb una puntuacio final de: " << pf << " punts.";
}

