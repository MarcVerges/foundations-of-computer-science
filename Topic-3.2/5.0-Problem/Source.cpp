#include <iostream>
using namespace std;

#define n_fil 3
#define n_col 3

bool SimtericaMatriu(int v1[][n_col], int N_FIL, int N_COL)
{
	bool res;

	if ((v1[1][0] == v1[0][1]) && (v1[1][2] == v1[2][0]))
	{
		res = true;
	}
	else
	{
		res = false;
	}

	return res;
}

int main()
{
	int v1[n_fil][n_col];
	int f, c;
	bool res;

	for (f = 0; f < n_fil; f++)
	{
		for (c = 0; c < n_col; c++)
		{
			cin >> v1[f][c];
		}
	}

	res = SimtericaMatriu(v1, n_fil, n_col);

	if (res)
	{
		cout << "SIMETRICA";
	}
	else
	{
		cout << "NO SIMETRICA";
	}
}