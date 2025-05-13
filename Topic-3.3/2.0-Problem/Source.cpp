#include <iostream>
using namespace std;

typedef struct {

	char titol[70];
	char editorial[70];
	int pagines;
	float preu;

}TLlibre;

int main()
{
	TLlibre llibre1;
	TLlibre llibre2;

	cout << "Introdeuix les dades del primer llibre: " << endl;
	cout << "Titol: ";
	cin >> llibre1.titol;
	cout << "Editorial: ";
	cin >> llibre1.editorial;
	cout << "Numero de pagines: ";
	cin >> llibre1.pagines;
	cout << "Preu: ";
	cin >> llibre1.preu;
	cout << endl;
	cout << "Introdeuix les dades del segon llibre: " << endl;
	cout << "Titol: ";
	cin >> llibre2.titol;
	cout << "Editorial: ";
	cin >> llibre2.editorial;
	cout << "Numero de pagines: ";
	cin >> llibre2.pagines;
	cout << "Preu: ";
	cin >> llibre2.preu;

	cout << "Llibres preferits:" << endl;
	cout << llibre1.titol << " " << llibre1.editorial << " " << llibre1.pagines << " " << llibre1.preu << endl;
	cout << llibre2.titol << " " << llibre2.editorial << " " << llibre2.pagines << " " << llibre2.preu;
}