#include <iostream>
using namespace std;
#define dim 5

void LlegirVector(int v1[dim], int e_dim)
{
	int i;
	for (i = 0; i < e_dim; i++)
	{
		cin >> v1[i];
	}

}

void EscriuVector(int v1[dim], int e_dim)
{
	int i;
	for (i = 0; i < e_dim; i++)
	{
		cout << v1[i] << " ";
	}
}
void SumaVectors(int v1[dim], int v2[dim], int v3 [dim], int e_dim)
{
	int i;
	for (i = 0; i < e_dim; i++)
	{
		v3[i] = v1[i] + v2[i];
	}
}



int main()
{
	int v1[dim], v2[dim], v3[dim];
	 int e_dim = dim;

	LlegirVector(v1,e_dim);
	LlegirVector(v2, e_dim);
	SumaVectors(v1, v2, v3, e_dim);
	EscriuVector(v3, e_dim);
}