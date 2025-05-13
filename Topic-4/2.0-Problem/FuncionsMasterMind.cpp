#include "FuncionsMasterMind.h"
using namespace std;

//Escriure a partir d'aqui les funcions demanades NO posar main()

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

#define LongCodi 4
#define MaxIntents 15


void Menu()
{
	cout << "MASTER MIND";
	cout << endl;
	cout << "Escull una opcio: ";
	cout << endl;
	cout << "Opcio 1 Ajuda";
	cout << "Opcio 2 Jugar";
	cout << "Opcio 3 Sortir";
}

void Ajuda()
{
	cout << "L'objectiu del joc es trobar el codi ocult" << endl;
	cout << "El codi es de longitut 4 nombres del 0 al 9" << endl;
	cout << "Despres de cada intent et dona la seguent informacio: " << endl;
	cout << "             Nombre de nombres encertats (en la posicio correcte)" << endl;
	cout << "             Nombres de nombres aproximats (correctes pero mal col.locats)" << endl;
	cout << "El nombre de intents son 15";
}

void GenerarCodiOcult(int CodiMaster[], int Dim)
{
	int i, a;
	int min = 0;
	int max = 9;

	//	srand((unsigned)time(NULL));

	for (i = 0; i < Dim; i++)
	{
		a = min + (rand() % (max - min + 1));
		CodiMaster[i] = a;
	}
}

int LleigrNombre(int min, int max)
{
	int num;
	do
	{
		cout << "Entra valor entre  " << min << " i " << max;
		cin >> num;

		if ((num < min) || (num > max))
		{
			cout << "Error: Valor fora de l'interval";
		}


	} while ((num < min) || (num > max));

	return num;
}

void IntToArray(int num, int v1[], int Dim)
{
	int i;

	for (i = Dim - 1; i >= 0; i--)
	{
		v1[i] = num % 10;
		num /= 10;

	}
}

void InicialitzarArray(int Array[], int Dim, int Valor)
{
	int i;
	for (i = 0; i < Dim; i++)
	{
		Array[i] = Valor;
	}
}

void FrequenciaDigit(int Codi[], int Dim, int Frequencia[])
{
	int i;
	for (i = 0; i < Dim; i++)
	{
		Frequencia[Codi[i]] ++;
	}
}

int NombreEncerts(int v1[], int v2[], int dim)
{
	int b = 0;
	int i;

	for (i = 0; i < dim; i++)
	{
		if (v1[i] == v2[i])
		{
			b++;
		}
	}
	return b;
}

int Minim(int Valor1, int Valor2)
{
	int minim;

	if (Valor1 >= Valor2)
	{
		minim = Valor2;
	}
	else minim = Valor1;

	return minim;
}

int NombreAproximacions(int FrequenciaCodiMaster[], int FrequenciaCodiBreaker[], int b)
{
	int i, j = 0;

	for (i = 0; i < 10; i++)
	{
		j = j + Minim(FrequenciaCodiMaster[i], FrequenciaCodiBreaker[i]);
	}
	j -= b;
	return j;
}

void ImprimirComparacions(int encerts, int aporx)
{
	cout << "Aquest codi te " << encerts << " Encerts i " << aporx << " Aporximacions";
}

int JocMasterMind()
{
	int CodiMaster[LongCodi];
	int CodiBreaker[LongCodi];
	int IntCodiBreaker;
	int FrequenciaCodiMaster[10];
	int FrequenciaCodiBreaker[10];
	int Encerts = 0;
	int Aporximacions;
	int Intents = 0;
	bool inte;
	int i = 0;

	GenerarCodiOcult(CodiMaster, LongCodi);
	InicialitzarArray(FrequenciaCodiMaster, LongCodi, 0);
	FrequenciaDigit(CodiMaster, LongCodi, FrequenciaCodiMaster);

	while ((Encerts < 4) && (Intents < MaxIntents))
	{
		int max = pow(10, LongCodi) - 1;
		IntCodiBreaker = LleigrNombre(0, max);
		IntToArray(IntCodiBreaker, CodiBreaker, LongCodi);
		InicialitzarArray(FrequenciaCodiBreaker, LongCodi, 0);
		Encerts = NombreEncerts(CodiMaster, CodiBreaker, LongCodi);
		Aporximacions = NombreAproximacions(FrequenciaCodiMaster, FrequenciaCodiBreaker, Encerts);
		ImprimirComparacions(Encerts, Aporximacions);
		Intents++;
	}
	if ((Intents == 15) && (Encerts < 4))
	{
		Intents = 0;
	}
	if (Intents >= MaxIntents + 1)
	{
		return 0;
	}
	else
	{
		return Intents;
	}
}

void ImprimirResultatJoc(int intents)
{
	if (intents != 0)
	{
		cout << "Has aconseguit descobrir el codi en " << intents << " intents";
	}
	else
	{
		cout << "No has aconseguit descobrir el codi";
	}
}








