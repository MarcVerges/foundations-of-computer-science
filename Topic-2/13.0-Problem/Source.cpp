#include <iostream>
#include "equacio.h"

using namespace std;
int main()
{
	int a, b, c;
	float res1 = 0, res2 = 0, num;
	cout << "Introduiex els valors de la equació: ";
	cin >> a >> b >> c;

	num= equacio(a, b, c,res1,res2);


	if (num >= 0)
	{
		cout << res1 << " " << res2;
	}
	else
	{
		cout << "Error, nombres irreals";
	}



	


}