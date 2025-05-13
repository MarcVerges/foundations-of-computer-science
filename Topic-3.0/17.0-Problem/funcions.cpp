#include <iostream>
#include "funcions.h"
using namespace std;

bool OrdenatDecreixent(int v1[], int dim)
{
	bool sequenvalida = true;
	int i = 1;
	int max = v1[0];
	
	while ((i < dim) && sequenvalida)
	{
		if (max > v1[i])
		{
			max = v1[i];
			i++;
		}
		else
		{
			sequenvalida = false;
		}
	}
	return sequenvalida;	
}