#include <iostream>
#include <stdlib.h>
using namespace std;

int divisio(int divid_1, int divis_1, int& quo_1, int& res_1)
{
	int err_1;
	if (divis_1 == 0)
	{
		err_1 = 1;
	}
	else
	{
		err_1 = 0;
		int a_2 = divid_1;

		while (divid_1 >= divis_1)
		{
			divid_1 = abs(divid_1) - abs(divis_1);
			quo_1++;
		}

		res_1 = a_2 - (quo_1* divis_1);
	}

	return err_1;
	}

int main()
{
	int divid, divis, quo=0, res = 0;
	int err;
	cout << "Itroduiex els valors de la diviso: ";
	cin >> divid >> divis;

	err = divisio(divid, divis, quo,res);

	if (err == 1)
	{
		cout << "Error: Divisio per zero";
	}
	else
	{
		cout << "Resultat - Quocient: " << quo << " i Residu: " << res;
	}
}
