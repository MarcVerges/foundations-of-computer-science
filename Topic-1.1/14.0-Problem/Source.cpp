#include <iostream>
using namespace std;
int main()
{
	int a;
	float b;
	float res1;

	cout << "introdueix el nombre d'unitats venudes i el preu: ";
	cin >> a >> b;

	res1 = a * b + (a * b * 0.07);
	
	if ((res1 > 500) && (res1 <= 1000))
	{
		res1 = res1 - (res1 * 0.05);
		cout << "L'import final de la compra son " << res1 << " euros.";
	}

	else 
	{
		if ((res1 > 1000))
		{
			res1 = res1 - (res1 * 0.1);
			cout << "L'import final de la compra son " << res1 << " euros.";
			
		 }

		else 
			cout << "L'import final de la compra son " << res1 << " euros.";
	}
}