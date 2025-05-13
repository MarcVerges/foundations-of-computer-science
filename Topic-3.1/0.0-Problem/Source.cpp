#include <iostream>
using namespace std;

#define dim 50

int LongCadena(char v1[])
{
	int i = 0;

	while (v1[i] != '\0')
	{
		i++;
	}
	return i;
}



int main()
{
	char v1[dim];
	int longitud;

	cin >> v1;

	longitud = LongCadena(v1); 

	cout << "La longitud de la cadena " << v1 << " es: " << longitud;



}
