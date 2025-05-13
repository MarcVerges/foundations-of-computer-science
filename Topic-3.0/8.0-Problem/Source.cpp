#include <iostream>
using namespace std;
int main()
{
	int const na = 15;
	float v1[na];
	int i;
	float sum=0;
	float cont = 0;
	float mitjana;

	for (i = 0; i < 15; i++)
	{
		cout << "Introdueix els mesos que tenia el/la nen/a N quan va caminar per primer cop: ";
		cin >> v1[i];

		while ((v1[i] > 18) || (v1[i] < 9))
		{
			cout << "Error: Valor no valid" << endl;
			cout << "Introdueix els mesos que tenia el/la nen/a N quan va caminar per primer cop: ";
			cin >> v1[i];
		}
	}

	for (i = 0; i < na; i++)
	{
		sum = sum + v1[i];
		cont++;
	}
	mitjana = sum / cont;
	cout << "Mitjana de edat en caminar: " << mitjana << " mesos";
}