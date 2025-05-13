#include <iostream>
using namespace std;
#define dim 6
int main()
{
	int v1[dim];
	int v2[dim];
	int i ;
	bool trobat = false;

	for (i = 0; i < dim; i++)
	{
		cin >> v1[i];
	}
	for (i = 0; i < dim; i++)
	{
		cin >> v2[i];
	}
	i = 0;
	while ((i < dim) && !trobat)
	{
		if (v1[i] != v2[i])
		{
			trobat = true;
		}
		else
		{
			i++;
		}
	}

	if (trobat == true)
	{
		cout << "DIFERENTS";
	}
	else
	{
		cout << "IGUALS";
	}
}