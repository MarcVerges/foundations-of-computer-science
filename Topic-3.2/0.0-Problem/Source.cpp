#include <iostream>
using namespace std;

#define n_fil 4
#define n_col 4

int main()
{
	int v1[n_fil][n_col];
	int f, c;
	int d;

	for (f = 0; f < n_fil; f++)
	{
		for (c = 0; c < n_col; c++)
		{
			cout << "Introdueix la matriu: [" << f << "][" << c << "]";
			cin >> v1[f][c];
		}
	}

	for (d = 0; d < n_fil; d++)
	{
		cout << "MAT [" << f << "][" << c << "]" << v1[d][d] << endl;
	}
}
