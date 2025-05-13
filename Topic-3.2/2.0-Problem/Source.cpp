#include <iostream>
using namespace std;
#define n_fil1 3
#define n_col1 4
#define n_fil2 5
#define n_col2 3



int main()
{
	int v1[n_fil1][n_col1] = { {6,7,8,9},{6,5,4,3},{1,0,0,1} };
	int v2[n_fil2][n_col2];
	int f, c;

	//inicialitzaciói
	for (f = 0; f < n_fil2; f++)
	{
		for (c = 0; c < n_col2; c++)
		{
			v2[f][c] = 5 * f + c;
		}
	}

	//escriure1
	for (f = 0; f < n_fil1; f++)
	{
		for (c = 0; c < n_col1; c++)
		{
			cout  << v1[f][c] << " ";
		}
		cout << endl;
	}

	//escriure2
	for (f = 0; f < n_fil2; f++)
	{
		for (c = 0; c < n_col2; c++)
		{
			cout << v2[f][c] << " ";
		}
		cout << endl;
	}
	
}
