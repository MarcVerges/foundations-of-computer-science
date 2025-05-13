#include <iostream>
#include "vectors.h"
using namespace std;
#define dim1 14
#define dim2 60
int main()
{
	//vector tmeps
	int v1[dim1];
	//temps posible
	int v2[dim2];
	int i;
	int max;
	int min;
	int v3[dim2];

	LlegirVector (v1, dim1);
	InicialitzarVector(v2, 0, dim2);


	for (i = 0; i < dim1; i++)
	{
		v1[i] = v1[i] + 10;
	}
	for (i = 0; i < dim1; i++)
	{
		v2[v1[i]] ++;
	}


	max = MaximVector(v2, dim2);
	min = MinimVectorNoZero(v2, dim2);

	max = max - 10;
	min = min - 10;

	cout << "Temperatura mes repetida: " << max << " - Temperatura menys repetida: " << min;
	

}

