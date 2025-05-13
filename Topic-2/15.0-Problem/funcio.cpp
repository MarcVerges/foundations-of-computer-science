#include <iostream>
using namespace std;


void direcio(int &x_1, int &y_1, int dir_1, int x_min1, int x_max1, int y_min1, int y_max1)
{
	switch (dir_1)
	{
		case 1: //esquerra
		{
			if ((x_1 - 1 )>= x_min1)
			{
				x_1 = x_1 - 1;
			}
			else
			{
				x_1 = x_1;
			}

			break;
		}
		case 2: //dreta
		{
			if ((x_1 + 1) <= x_max1)
			{
				x_1 = x_1 + 1;
			}
			else
			{
				x_1 = x_1;
			}

			break;
		}
		case 4: // baix 
		{
			if ((y_1 - 1) >= y_min1)
			{
				y_1 = y_1 - 1;
			}
			else
			{
				y_1 = y_1;
			}

			break;
		}
		case 3: // dalt
		{
			if ((y_1 + 1) >= y_max1)
			{
				y_1 = y_1 + 1;
			}
			else
			{
				y_1 = y_1;
			}

			break;
		}
	}
}


