#include <iostream>
using namespace std;

//inicialitzar
void InicialitzarVector (int v1[], int num1, int dim)
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


