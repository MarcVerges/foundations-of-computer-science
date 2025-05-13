#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


//Funcio 1
void PresentacioJoc()
{
	cout << "Pedra, paper, tisores, llangardaix, Spock es un joc d'atzar aplicacio del popular Pedra, paper, tisores" << endl;
	cout << "Creat per Sam Kass amb Kass amb Karen Bryla  http:// www.samkas.com/theories/ RPSSL.html" << endl,
		cout << "Popularitzat per Sheldon Cooper a la serie Big Bang Theory " << endl;
	cout << "Es fa servir per solucionar una entre disputa  Sheldon i Raj en el capitol de The Lizard - Spocke Expansion" << endl;
	cout << endl;
	cout << "El joc es al millor de N partides on N es un nombre senar";
}

//Funcio 2
bool Senar(int N)
{

	bool res;
	res = ((N % 2) != 0);


	return res;
}

//Funcio3
int LlegirSenar()
{
	int n;
	int nfin;

	do
	{
		cout << "Introdeuix un nombre senar " << endl;
		cin >> n,

			nfin = Senar(n);

		if (nfin != 1)
		{
			cout << "ERROR: El nombre introduit es parell" << endl;
		}


	} while (nfin != 1);

	return n;
}

//Funcio 4
int Aleatori(int min, int max)
{
	int a;
	srand((unsigned)time(NULL));
	
	a = min + (rand() % (max-min+1));
	
	return a;	
}

//Funcio 5

void MenuRPSLS()
{
	cout << "Escull entre " << endl;
	cout << "1 - Rock" << endl;
	cout << "2 - Paper" << endl;
	cout << "3 - Scissors" << endl;
	cout << "4 - Lizard" << endl;
	cout << "5 - Spock" << endl;
}

//Funcio 6

int LlegirNombre(int min, int max)
{
	int op;

	do
	{
		cout << "Entra valor entre " << min << " i " << max << endl;
		cin >> op;

		if ((op < min) || (op > max))
		{
			cout << "Error: valor fora de l'interval";
		}

	} while ((op < min) || (op > max));

	return op;
}

//Funcio 7

int JocRPSLS(int p1, int p2)
{
	const int Rock = 1;
	const int Paper = 2;
	const int Scissors = 3;
	const int Lizard = 4;
	const int Spock = 5;
	int guany;

	if (p1 == p2)
	{
		guany = 0;
	}
	else
	{
		switch (p1)
		{
		case Rock:
		{
			if ((p2 == Paper) || (p2 == Spock))
			{
				guany = 2;
			}
			else
			{
				guany = 1;
			}
			break;
		}
		case Paper:
		{
			if ((p2 == Scissors) || (p2 == Lizard))
			{
				guany = 2;
			}
			else
			{
				guany = 1;
			}
			break;
		}
		case Scissors:
		{
			if ((p2 == Spock) || (p2 == Rock))
			{
				guany = 2;
			}
			else
			{
				guany = 1;
			}
			break;
		}
		case Lizard:
		{
			if ((p2 == Rock) || (p2 == Scissors))
			{
				guany = 2;
			}
			else
			{
				guany = 1;
			}
			break;
		}
		case Spock:
		{
			if ((p2 == Paper) || (p2 == Lizard))
			{
				guany = 2;
			}
			else
			{
				guany = 1;
			}
			break;
		}

		}
	}

	return guany;
}

//Funcio 8

void MissatgeRPSLS(int p1, int p2)
{

	const int Rock = 1;
	const int Paper = 2;
	const int Scissors = 3;
	const int Lizard = 4;
	const int Spock = 5;

	if (p1 == p2)
	{
		cout << "Empat!!!" << endl;
	}
	else
	{
		switch (p1)
		{
		case Rock:
		{
			if (p2 == Paper)
			{
				cout << "Paper covers Rock" << endl;
			}
			if (p2 == Scissors)
			{
				cout << "Rock crushes Scissors" << endl;
			}
			if (p2 == Lizard)
			{
				cout << "Rock crushes Lizard" << endl;
			}
			if (p2 == Spock)
			{
				cout << "Spock vaporizes Rock" << endl;
			}
			break;
		}
		case Paper:
		{
			if (p2 == Rock)
			{
				cout << "Paper covers Rock" << endl;
			}
			if (p2 == Scissors)
			{
				cout << "Scissors cutS Paper" << endl;
			}
			if (p2 == Lizard)
			{
				cout << "Lizard eats Paper" << endl;
			}
			if (p2 == Spock)
			{
				cout << "Paper disproves Spock" << endl;
			}
			break;
		}
		case Scissors:
		{
			if (p2 == Rock)
			{
				cout << "Rock crushes Scissors" << endl;
			}
			if (p2 == Paper)
			{
				cout << "Scissors cuts Paper" << endl;
			}
			if (p2 == Lizard)
			{
				cout << "Scissors decapitates Lizard" << endl;
			}
			if (p2 == Spock)
			{
				cout << "Spock smashes Scissors" << endl;
			}
			break;
		}
		case Lizard:
		{
			if (p2 == Rock)
			{
				cout << "Rock crushes Lizard" << endl;
			}
			if (p2 == Paper)
			{
				cout << "Lizard eats Paper" << endl;
			}
			if (p2 == Scissors)
			{
				cout << "Scissors decapitates Liazard" << endl;
			}
			if (p2 == Spock)
			{
				cout << "Lizard poisons Spock" << endl;
			}
			break;
		}
		case Spock:
		{
			if (p2 == Rock)
			{
				cout << "Spock vaporizes Rock" << endl;
			}
			if (p2 == Paper)
			{
				cout << "Paper disproves Spock" << endl;
			}
			if (p2 == Scissors)
			{
				cout << "Spock smashes Scissors" << endl;
			}
			if (p2 == Lizard)
			{
				cout << "Lizard poisons Spock" << endl;
			}
			break;
		}
		}

	}

}

//Funcio principal

int main()
{
	//partides
	int n;
	//parametres
	int min = 1, max = 5;
	//opcio maquina
	int opm;
	//opcio jugador
	int opj;
	//Juanyador
	int guany;
	//contador partides juanyades
	int contm = 0, contj = 0;
	//necesitat per guanyar
	int nec;

	PresentacioJoc();
	n = LlegirSenar();
	nec = (n / 2) + 1;

	do
	{
		opm = Aleatori(min, max);

		MenuRPSLS();

		opj = LlegirNombre(min, max);

		guany = JocRPSLS(opm, opj);

		MissatgeRPSLS(opm, opj);

		if (guany == 1)
		{
			contm++;
			cout << "Guanya Sheldon Cooper!!!" << endl;

		}
		if (guany == 2)
		{
			contj++;
			cout << "Guanyes Tu!!!" << endl;

		}

		cout << "MARCADOR -- Sheldon " << contm << " Tu " << contj << endl;

	} while ((contm < nec) && (contj < nec));


	if (contm > contj)
	{
		cout << "El guanyador es Sheldon";
	}
	else
	{
		cout << "Tu ets el guanyador";
	}
}







