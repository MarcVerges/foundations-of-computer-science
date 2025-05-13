#include <iostream>
using namespace std;

int main()

{  int a;
   float b;
   float c;

	cout << "introduiex un valor de x: ";
	cin >> a;

	b = 2.0 / (float(a) - 4.0);
	c = (1.0 + 4.0 - float(a)) / (3.0 * (float(a) + 3.0));

	cout << "Resultat: " << b << endl;
	cout << "Resultat: " << c << endl;
		

}
