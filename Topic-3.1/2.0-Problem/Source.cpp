#include <iostream>
#include "funcio.h"

using namespace std;
#define dim 70
int main()
{
	char v1[dim];
	char lletra;
	bool res;

	cout << "Introdueix el string: ";
	cin >> v1;
	cout << "Introdueix la lletra: ";
	cin >> lletra;

	res = TrobarCaracter(v1, lletra);
	cout << res;
}