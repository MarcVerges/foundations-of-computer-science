#include <iostream>
using namespace std;

bool TrobarCaracter(char v1[], char lletra)
{
	int i = 0;
	bool trobat = false;

	while ((v1[i] != '\0') && !trobat)
	{
		if (v1[i] == lletra)
		{
			trobat = true;
		}
		else
		{
			i++;
		}
	}

	return trobat;
}