#include <iostream>

using namespace std;
int main()
{
    //declaracio
	int a;
	int b;

	//input

	cout << "introduiex un nombre: ";
	cin >> a;

	//output

	b = a % 10000 / 1000;
	cout << "Les unitats de miler del nombre " << a << " son " << b << endl;

}