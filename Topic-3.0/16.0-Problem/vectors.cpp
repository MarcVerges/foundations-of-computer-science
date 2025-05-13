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