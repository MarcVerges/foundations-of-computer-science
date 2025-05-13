#include <iostream>
using namespace std;


int DivisioEnters(int divid_1, int divis_1, int& res_1)
{
	int pos_1 = 1;

	if (divis_1 != 0)
	{
		res_1 = float(divid_1) / float(divis_1);
	}
	else
	{
		pos_1 = 0;
	}
	return pos_1;
}

int main()
{
	float divid, divis , res,pos;
	cout << "Introduiex el divdend i el divisor: ";
	cin >> divid >> divis;

	pos = divisio(divid, divis, res);

	if (pos == 1)
	{
		cout <<"Resultat de la divisio: " << res;
	}
	else
	{
		cout << "Error: Divisio per zero";
	}
}