#include <iostream>
using namespace std;
#define dim 70

char PrimerDiferent(char v1[], char v2[])
{
	int i = 0;
	char ret;
	bool trobat = false;

	while ((v1[i] != '\0') && !trobat)
	{
		if (v1[i] != v2[i])
		{
			ret = v1[i];
			trobat = true;
		}
		else
		{
			i++;
			ret = '\0';
		}
	}

	return ret;

}


int main()
{
	char v1[dim];
	char v2[dim];
	char res;

	cout << "Introdueix la priemra cadena: ";
	cin >> v1;
	cout << "Introdueix la segona cadena: ";
	cin >> v2;

	res = PrimerDiferent(v1, v2);

	if (res == '\0')
	{
		cout << "No hi ha cap caracter diferent";
	}
	else
	{
		cout << "El primer caracter diferent es " << res;
	}



}
