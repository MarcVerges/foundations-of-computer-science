#include <iostream>
#include "funcio.h"


using namespace std;
int main()
{
	//v.dimensions del quadre
	int x_min, x_max, y_min, y_max;
	//v.posicions del punt 
	int x, y;
	//v. direccio del moviment
	int dir;
	

	//v. dimensions quadre
	do
	{
		cout << "Introdeuix les dimensions del quadre: ";
		cin >> x_min >> x_max >> y_min >> y_max;

	} while ((x_min >= x_max) || (y_min >= y_max));

	//posicio del punt
	do
	{
		cout << "Introdueix les cordenades del punt: ";
		cin >> x >> y;

	} while ((x < x_min) || (x > x_max) || (y < y_min) || (y > y_max));

	
	do
	{
		cin >> dir;

		direcio(x, y, dir, x_min, x_max, y_min, y_max);

		cout << "(" << x << "," << y << ")" << endl;


	} while (dir != 5);

}