#include<iostream>

using namespace std;

int main()
{
	int a;
		bool res;

		cout << "Escriu un nombre: ";

		cin >> a;
		res = (0 < a) && (a < 10);

		cout << "El resultat de la comparacio es: " << res;



}