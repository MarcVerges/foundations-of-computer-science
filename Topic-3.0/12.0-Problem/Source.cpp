#include <iostream>
using namespace std;
#define dim 10
int main()
{
	int v1[dim];
	int i;
	bool trobat = false;
	int sum = 0;

	for (i = 0; i < dim; i++)
	{
		cin >> v1[i];
	}
	i = 0;
	while ((i < dim) && !trobat)
	{
		sum = sum + v1[i];
		if (sum > 25)
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
		cout << "A la posicio " << i + 1 << " la suma acumulada es superior a 25";
	}
	else
	{
		cout << "La suma acumulada de l'array es inferior o igual a 25";
	}
}