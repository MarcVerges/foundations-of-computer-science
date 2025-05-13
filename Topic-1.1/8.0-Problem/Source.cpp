#include <iostream>
using namespace std;
int main()
{
	int a;
	int b = 2022;
	int c;

	cout << "introdueix el teu any de neixement: ";
	cin >> a;

	c = b - a;

	cout << "Tens " << c << " anys." << endl;
	if ((c < 67) && (c >= 16))
		cout << "Estas en edat de treballar.";


}