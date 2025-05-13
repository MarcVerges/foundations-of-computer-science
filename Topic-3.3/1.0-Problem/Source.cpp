#include <iostream>
using namespace std;
#define dim 5


typedef struct
{
	char nom[10];
	char cognom1[15];
	char cognom2[15];
	float nota;
}TipusAlumne;



int main()
{
	int i;
	TipusAlumne Alumne[dim];

	for (i = 0; i < dim; i++)
	{
		cout << "Nom: ";
		cin >> Alumne[i].nom;
		cout << "Primer cognom: ";
		cin >> Alumne[i].cognom1;
		cout << "Segon cognom: ";
		cin >> Alumne[i].cognom2;
		cout << "Nota: ";
		cin >> Alumne[i].nota;
	}
	for (i = 0; i < dim; i++)
	{
		cout << Alumne[i].cognom1 << " " << Alumne[i].cognom2 << ", " << Alumne[i].nom << " " << Alumne[i].nota << endl;
	}
}