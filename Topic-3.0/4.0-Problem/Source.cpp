#include <iostream>
using namespace std;
int main()
{
	int const dim = 10;
	int v1[dim];
	bool trobat = false;
	int i = 0;

	for (i = 0; i < dim; i++)
	{
		cout << "Introdeuix el valor " << i + 1 << " del vector:";
		cin >> v1[i];
	}

	i = 0;
	while ((i < dim-1) && (!trobat))
	{
		if (v1[i] > v1[i + 1])
		{
			 trobat = true;
		}
		else
		{
			i++;
		}
	}
	cout << i;

}