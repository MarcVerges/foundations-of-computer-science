#include <iostream>
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


int BuscarPosicio(int v1[], int num, int dim)
{
	int i = 1;
	bool trobat = false;
	int ret;
	int max = v1[0];

	while ((i < dim) && !trobat)
	{
		if ((num < v1[4]) || (num > v1[0]) || (max > num) && (num > v1[i]))
		{
			trobat = true;

			if ((num < v1[dim]))
			{
				ret = -1;
			}
			if ((num > v1[0]))
			{
				ret = 0;
			}
			if ((max > num) && (num > v1[i]))
			{
				ret = i;
			}
		}
		else
		{
			max = v1[i];
				i++;
		}


	}
	return ret;
}

	
