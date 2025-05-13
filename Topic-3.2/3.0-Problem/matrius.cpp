#include <iostream>
#include "matrius.h"
using namespace std;


void LlegirMatriu(float v1[][N_COL], int N_FIL, int n_col)
{
	int f, c;

	for (f = 0; f < N_FIL; f++)
	{
		for (c = 0; c < N_COL; c++)
		{
			cout << "Introdeuix el valor de la posocio M [" << f << "][" << c << "] = ";
			cin >> v1[f][c];
		}
	}
}
void EscriureMatriu(float v1[][N_COL], int N_FIL, int n_col)
{
	int f, c;

	for (f = 0; f < N_FIL; f++)
	{
		for (c = 0; c < N_COL; c++)
		{
			cout << " M[" << f << "][" << c << "] = " << v1[f][c] << " ";
		}
		cout << endl;
	}
}
