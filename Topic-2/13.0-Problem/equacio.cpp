#include <iostream>
#include <math.h>

using namespace std;

int equacio(int a_1, int b_1, int c_1, float& res_1, float& res_2)
{
	int num_1;
	int art;


	art = ((b_1 * b_1) -( 4 * a_1 * c_1));

	if (art == 0)
	{
		num_1 = 1;
	}
	if (art< 0)
	{
		num_1 = 0;
	}
	if (art > 0)
	{
		num_1 = 2;
	}


	res_1 = (-b_1 + sqrt(float (art))) / (2 * a_1);
	res_2 = (-b_1 - sqrt(float(art))) / (2 * a_1);

	return num_1;
}