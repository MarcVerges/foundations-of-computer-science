#include <iostream>
using namespace std;
void potencies(int n_1,int l_1)
{
	int potencia = 1;
	while (potencia < l_1)
	{
		potencia = potencia * n_1;

		if (potencia < l_1)
		{
			cout << potencia << " ";
		}
	}
}


int main()
{
	int N, L,res;

	cout << "Introdueix el nombre n i l: ";
	cin >> N >> L;

	if ((N > 1) && (L > N))
	{
		potencies(N, L);
	}
}