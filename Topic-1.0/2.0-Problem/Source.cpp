#include <iostream>

using namespace std;

int main()
{
	// declaracio
	float a;
	float b;
	float c;
	float d;

	//input	
	cout << "introdueix les tres notes separades i clica enter: ";
	cin >> a >> b >> c;

	d = (a + b + c) / 3;


	cout << "La mitjana de les tres notes: " <<  a <<", "<< b <<" i "<< c << " es " << d << endl;
		

}