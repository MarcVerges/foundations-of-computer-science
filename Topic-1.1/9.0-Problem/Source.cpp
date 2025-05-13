#include <iostream>
using namespace std;
int main()
{

	int a;
	int b;
	int c = 2022;

	cout << "Escriu el teu any de neixement: ";
	cin >> a;

	b = c - a;

	if (b < 18)
		cout << "Tens " << b << " anys i ets menor d'edat.";
	else 
		cout << "Tens " << b << " anys i ets major d'edat.";

}