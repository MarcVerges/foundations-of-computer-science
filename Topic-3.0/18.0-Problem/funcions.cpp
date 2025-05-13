#include <iostream>
using namespace std;

void LlegirVectror(int v1[],int dim)
{
	int i;
	for (i = 0; i < dim; i++)
	{
		cin >> v1[i];
	}
}

bool InversArray(int v1[], int v2 [],  int dim)
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

	i = 0;

	while ((i < dim) && iguals)
	{
		if (v1[i] != v2[i])
		{
			iguals = false;
		}
		else
		{
			i++;
		}
	}

	return iguals;


}