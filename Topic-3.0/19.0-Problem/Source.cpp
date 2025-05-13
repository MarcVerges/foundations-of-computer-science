#include <iostream>
#include "funcio.h"
#define dim 5
using namespace std;

int main()
{
	int v1[dim];
	int ret;
	int i;
	bool correcte;
	int num;

	

	for (i = 0; i < dim; i++)
	{
			cin >> v1[i];
	}

	correcte = OrdenatDecreixent(v1, dim);

	if (correcte == true)
	{
		cout << "Introduiex el num: ";
		cin >> num;

		ret = BuscarPosicio(v1, num, dim);

		if (ret == -1)
		{
			cout << "Tots els valors del vector son mes grans que " << num;
		}
		else
		{
			cout << "El valor ha de anar a la posicio " << ret;
		}
	}
	else
	{
		cout << "El vector no esta correctament ordenat";
	}
	
}