#include <iostream>
#include <Windows.h>
using namespace std;


void alerta(int sec) //exemple de porcediment (ja que no retorna cap valor important dins de la sortida int)
{
	cout << "Alerta: ";
	if (sec != 0)
	{
		cout << "Queden " << sec << " segons" << endl;
	}
	else
	{
		cout << "S'ha acabat el temps";
	}
}
int main()
{
	int sec_1;
	cout << "Introdeuix els segons: ";
	cin >> sec_1;

	do
	{
		alerta(sec_1);
		Sleep(1000);
		sec_1--;

	} while (sec_1 >= 0);
}