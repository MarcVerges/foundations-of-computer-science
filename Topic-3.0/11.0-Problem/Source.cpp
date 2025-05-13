#include <iostream>
using namespace std;
#define dim 9

int main()
{
	int v1[dim];
	int i;
	bool trobat = false;

	for (i = 0; i < dim; i++)
	{
		cin >> v1[i];
	}
	i = 0;
	while ((i < dim) && !trobat)
	{
		if (v1[i] % 2 == 0)
		{
			trobat = true;
		}
		else
		{
			i++;
		}
	}
	if (trobat)
	{
		cout << "NO TOTS SON SENARS";
	}
	else
	{
		cout << "TOTS SON SENARS";
	}
}