#include <iostream>
using namespace std;


int main()
{
	int const pos = 12;
	float v1 [pos]; 
	int i; 

	cout << "Introduiex els valors del vactor: ";

	for (i = 0; i < pos; i++)
	{
		cin >> v1[i];
	}
	cout << "Entrada: ";
	for (i = 0; i < pos; i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	cout << "Sortida: ";
	for (i = 0; i < pos; i++)
	{
		if (v1[i] < 0)
		{
			v1[i] = 0;
		}

		cout << v1[i] << " ";
	}
}