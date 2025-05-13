#include <iostream>
using namespace std;
int main()
{
	int const dim = 10;
	int v1[dim];
	int i = 0;
	bool trobat = false;

	while ((i < dim) && !trobat)
	{

		cout << "Introdeuieix un valor: ";
		cin >> v1[i];

		if (v1[i] == 0)
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
		cout << "Hem introduit un zero ";
	}
	else
	{
		cout << "Hem arribat al final de l array ";
	}
}