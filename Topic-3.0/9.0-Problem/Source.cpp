#include <iostream>
using namespace std;
int main()
{
	int const pos = 10;
	int v1[pos];
	int i;
	int max = 0;
	int ind = 0;

	cout << "Introdeuix els valors del vector:" << endl;
	for (i = 0; i < pos; i++)
	{
		cin >> v1[i];
	}
	for (i = 0; i < pos; i++)
	{
		if (v1[i] > max)
		{
			max = v1[i];
			ind = i;
		}
	}
	cout << "El maxim del vector es " << max << " i es troba a ´l'índex " << ind;
}