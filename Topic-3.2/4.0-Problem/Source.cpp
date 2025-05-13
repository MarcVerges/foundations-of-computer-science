#include <iostream>
using namespace std;
#define N_FIL 2
#define N_COL 3


int SumaValorsMatriu(int v1[][N_COL], int n_fil, int n_col)
{
	int res = 0;
	int f, c;

	for (f = 0; f < n_fil; f++)
	{
		for (c = 0; c < n_col; c++)
		{
			res = res + v1[f][c];
		}
	}
	return res;
}


int main()
{
	int v1[N_FIL][N_COL];
	int f, c;
	int res;

	for (f = 0; f < N_FIL; f++)
	{
		for (c = 0; c < N_COL; c++)
		{
			cin >> v1[f][c];
		}
	}
	res = SumaValorsMatriu (v1, N_FIL, N_COL);

	cout << "Suma valors matriu: " << res;

}