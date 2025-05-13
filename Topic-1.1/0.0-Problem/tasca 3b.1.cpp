#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Escriu un nombre: ";
	cin >> a;
	cout << "El nombre " << a;
		
	if ((a > 10) || (a < 0))
		cout << " NO";

	cout << " esta a l'interval. ";

}