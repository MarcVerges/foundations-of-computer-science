#include <iostream>
using namespace std;
int main()

{
	int const dim = 12;
	int v1[dim];
	int i;
	int mitj,cont =0;
	int mesmax = 1, mesmin = 1;
	int mes = 0;

	//lectura	
	for (i = 0; i < dim; i++)
	{
		cin >> v1[i];
	}

	int min = v1[0];
	int max = v1[0];

	//minim i maxim
	for (i = 0; i < dim; i++)
	{
		if (v1[i] < min)
		{
			min = v1[i];
			mesmin = i + 1;
			
		}
		if (v1[i] > max)
		{
			max = v1[i];
			mesmax = i + 1;
		}
	}
	cout << "Mes amb temperatura minima: " << mesmin << endl;
	cout << "Mes amb temperatura maxima: " << mesmax << endl;

	//mitjana

	for (i = 0; i < dim; i++)
	{
		cont = cont + v1[i];	
	}
	mitj = cont / 12;
	cout << "Tempreatura mitjana: " << mitj << endl;

	//per sobre o per sota de la mitja
	for (i = 0; i < dim; i++)
	{
		if (v1[i] < mitj)
		{
			mes = i + 1;
			cout << "El mes " << mes << " ha tingut temperatura inferior a la mitjana anual." << endl;
		}
		if (v1[i] > mitj)
		{
			mes = i + 1;
			cout << "El mes " << mes << " ha tingut temperatura superior a la mitjana anual." << endl;
		}
		if (v1[i] == mitj)
		{
			mes = i + 1;
			cout << "El mes " << mes << " ha tingut temperatura igual a la mitjana anual." << endl;
		}
	}

}