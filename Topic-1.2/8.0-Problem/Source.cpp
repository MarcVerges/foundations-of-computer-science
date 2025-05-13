#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
	int hh, mm, ss;
	char c;
	cout << "Introduiex la hora en format (hh:mm:ss): ";
	cin >> hh >> c >> mm >> c >> ss;

	do 
	{
		Sleep(1000);
		ss = ss + 1;
		cout << hh << ":" << mm << ":" << ss << endl;
		
	} while (_kbhit() != 1);
}