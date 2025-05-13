#include <iostream>
using namespace std;
int main()
{
	//variables
	int hh, mm, ss;
	char c;

	//inputs
	cout << "introdueix la hora en format (hh:mm:ss): ";
	cin >> hh >> c >> mm >> c >> ss;

	//Proces
	ss = ss + 1;

	if (ss == 60)
	{
		mm = mm + 1;
		ss = 00;
	}
		
	if (mm == 60)
	{
		hh = hh + 1;
		mm = 00;

	}
	if (hh == 24)
		hh = 00;

		
	//outputs

	if (hh < 10)
		cout << 0;
	cout << hh << ":";

	if (mm < 10)
		cout << 0;
	cout << mm << ":";

	if (ss < 10)
		cout << 0;
	cout << ss << endl;

}