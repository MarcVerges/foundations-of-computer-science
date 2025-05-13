#include <iostream>
using namespace std;


typedef struct 
{
	char nom[10];
	char cognom1[15];
	char cognom2[15];
	float nota;
}TipusAlumne;

int main()
{
	TipusAlumne Alumne;
	cout << "Nom: ";
	cin >> Alumne.nom;
	cout << "Primer cognom: ";
	cin >> Alumne.cognom1;
	cout << "Segon cognom: ";
	cin >> Alumne.cognom2;
	cout << "Nota: ";
	cin >> Alumne.nota;

	cout << Alumne.cognom1 << " " << Alumne.cognom2 << ", " << Alumne.nom << " " << Alumne.nota;
}