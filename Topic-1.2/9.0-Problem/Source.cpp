#include <iostream>
#include <unistd.h>


using namespace std;

int main()
{
	int hh, mm, ss, d;
	char c;
	cout << "Introduiex la hora en format (hh:mm:ss): " << endl;
	cin >> hh >> c >> mm >> c >> ss;
	d = 0;


	do
	{
		sleep(1);
		ss = ss + 1;
		d++;
		if (ss > 59)
		{
			ss = 0;
			mm = mm + 1;
		}
		if (mm > 59)
		{
			mm = 0;
			hh = hh + 1;
		}
		if (hh > 23)
		{
			hh = 0;
		}

		if (hh < 10)
			cout << "0" << hh << ":";
		else
			cout << hh << ":";
		if (mm < 10)
			cout << "0" << mm << ":";
		else
			cout << mm << ":";
		if (ss < 10)
			cout << "0" << ss << endl;
		else
			cout << ss << endl;
	} while (d < 5);
}
