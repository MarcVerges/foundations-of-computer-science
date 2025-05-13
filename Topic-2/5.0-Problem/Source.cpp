#include <iostream>
using namespace std;

void incrementaHora(int &hh, int &mm , int &ss)
{
	ss++;

	if (ss == 60) {
		ss = 0;
		mm++;
	}
	if (mm == 60) {
		mm = 0;
		hh++;
	}
	if (hh == 24) {
		hh = 0;
	}



}


