#include <iostream>

using namespace std;
int main()
{
	int a;
	int b;

	cout << "escriu el nombre del cual vols saber les unitats de miler: ";
	cin >> a;
	b = a%1000 / 100;
	
	cout << " Les unitats de miler del nombre " << a << " son " << b;

}