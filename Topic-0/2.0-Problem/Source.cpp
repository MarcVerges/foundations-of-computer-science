#include <iostream>

using namespace std;

int main()
{
	int any;
	int edat;
	int any_actual;

		cout << "Introdueix el any actual: ";

	cin >> any_actual;

		cout << "Introdueix el teu any de neixement: ";
		
		cin >> any;
		
		edat = any_actual- any;
		
		cout << "Tens " << edat << " anys" << endl;

}