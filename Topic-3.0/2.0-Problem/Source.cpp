#include <iostream>
using namespace std;
#define nalum 20

int main()
{
	int notes[nalum];
	int i;
	int aprovats = 0;

	for (i = 0; i < nalum; i++)
	{
		cout << "Introdeuix les notes del estudiant " << i + 1 << " : ";
		cin >> notes[i];

		while ((notes[i] < 0) || (notes[i] > 10))
		{
			cout << "Error: nota no valida" << endl;
			cout << "Introdeuix les notes del estudiant " << i + 1 << " : ";
			cin >> notes[i];
		}
	}

	for (i = 0; i < nalum; i++)
	{
		if (notes[i] > 5)
		{
			aprovats++;
		}
	}
	cout << "Numero d'alumnes aporvats: " << aprovats;






}
