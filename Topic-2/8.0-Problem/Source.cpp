#include <iostream>
using namespace std;




float divisio(float divid_1, float divis_1)
{
	int res_1;
	res_1 = divid_1 / divis_1;
	return res_1;
}



int main()
{
	int divid,divis, res;
	cout << "Introdueix el divident i el divisor: ";
	cin >> divid >> divis;

	res = divisio(divid, divis);

	if (divis == 0)
	{
		cout << "Error: Divisio per zero";
	}
	else
	{
		cout << divid << " : " << divis << " = " << res;
	}
}
