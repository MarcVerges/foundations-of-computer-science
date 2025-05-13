#include <iostream>
using namespace std;
#define n_fil 2
#define n_col 3


void LlegirMatriu(int v1[][n_col], int N_FIL, int N_COL)
{
	int f, c;

	for (f = 0; f < N_FIL; f++)
	{
		for (c = 0; c < N_COL; c++)
		{
			cout << "Introdueix el valor de la posocio M [" << f << "][" << c << "] = ";
			cin >> v1[f][c];
		}
	}
}
void EscriureMatriu (int v1[][n_col], int N_FIL, int N_COL)
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

void SumaMatrius(int v1[][n_col], int v2[][n_col], int v3[][n_col], int N_FIL, int N_COL)
{
	int f, c;

	for (f = 0; f < N_FIL; f++)
	{
		for (c = 0; c < N_COL; c++)
		{
			v3[f][c] = v1[f][c] + v2[f][c];
		}
	}
}


int main()
{
	int v1[n_fil][n_col], v2[n_fil][n_col], v3[n_fil][n_col];

	LlegirMatriu(v1, n_fil, n_col);
	LlegirMatriu(v2, n_fil, n_col);
	SumaMatrius(v1, v2, v3, n_fil, n_col);
	EscriureMatriu(v3, n_fil, n_col);
}
