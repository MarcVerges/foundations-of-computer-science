#include <iostream>
using namespace std;
#define n_fil1 2
#define n_fil2 3
#define n_col 3

void ProducteMatrius(float v1[][n_col], float v2[][n_col], float v3[][n_col], int N_FIL, int N_COL)
{
	int f, c, d;
	for (f = 0; f < N_FIL; f++)
	{
		for (c = 0; c < N_COL; c++)
		{
			for (d = 0; d < 3; d++)
			{
				v3[f][c] += v1[f][d] * v2[d][c];
			}
			cout << v3[f][c] << " ";
		}
		cout << endl;
	}
}


int main()
{
	float v1[n_fil1][n_col];
	float v2[n_fil2][n_col];
	float v3[n_fil1][n_col];
	int f, c;

	cout << "Introdeuix la primera matriu: " << endl;

	for (f = 0; f < n_fil1; f++)
	{
		for (c = 0; c < n_col; c++)
		{
			cin >> v1[f][c];
		}
	}
	for (f = 0; f < n_fil2; f++)
	{
		for (c = 0; c < n_col; c++)
		{
			cin >> v2[f][c];
		}
	}
	for (f = 0; f < n_fil1; f++)
	{
		for (c = 0; c < n_col; c++)
		{
			v3[f][c] = 0;
		}
	}

	ProducteMatrius(v1, v2, v3, n_fil1, n_col);
}