#include <iostream>
using namespace std;

//inicialitzar
void InicialitzarVector(int v1[], int num1, int dim)
{
	int i;
	for (i = 0; i < dim; i++)
	{
		v1[i] = num1;
	}
}

//llegir
void LlegirVector(int v1[], int dim)
{
	int i;
	for (i = 0; i < dim; i++)
	{
		cin >> v1[i];
	}
}

//esriure
void EscriureVector(int v1[], int dim)
{
	int i;
	for (i = 0; i < dim; i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
}

float MitjanaVector(int v1[], int dim)
{
	int i;
	float mitj = 0;
	float mitj2 = 0;

	for (i = 0; i < dim; i++)
	{
		mitj = mitj + v1[i];
	}
	mitj2 = mitj / dim;
	return mitj2;
}

int MaximVector(int v1[], int dim)
{
	int i;
	int quomax = v1[1];
	int index;

	for (i = 0; i < dim; i++)
	{
		if (v1[i] > quomax)
		{
			quomax = v1[i];
			index = i;
		}
	}
	return index;
}

int MinimVector(int v1[], int dim)
{
	int i;
	int quomin = v1[1];
	int index;

	for (i = 0; i < dim; i++)
	{
		if (v1[i] < quomin)
		{
			quomin = v1[i];
			index = i;
		}
	}
	return index;
}

int MinimVectorNoZero(int v1[], int dim)
{
	int valmin = v1[0];
	int posmin = 0;
	int i;


	for (i = 1; i < dim; i++)
	{
		if ((v1[i] < valmin) && (v1[i] != 0) || (valmin == 0))
		{
			valmin = v1[i];
			posmin = i;
		}
	}
	return posmin;
}

//invers del vector

void InversArray(int v1[], int dim)
{
	int i;
	int aux;
	bool iguals = true;

	for (i = 0; i < (dim / 2); i++)
	{
		aux = v1[i];
		v1[i] = v1[dim - 1 - i];
		v1[dim - 1 - i] = aux;
	}
}