#include <iostream>
#include <string.h>
using namespace std;
#define N_EQUIPS 5

typedef struct
{
	char nom[70];
	char ciutat[70];
	float punts;
	float pressupost;
}TEquip;

void InicialitzarClassifiacio(TEquip equips[], int dim1)
{
	int i;
	for (i = 0; i < dim1; i++)
	{
		strcpy_s(equips[i].nom, "-----");
		strcpy_s(equips[i].ciutat, "-----");
		equips[i].punts = 0;
		equips[i].pressupost = 0;		 
	}
}

void MostrarClassificacio(TEquip equips[], int dim1)
{
	int i;
	for (i = 0; i < dim1; i++)
	{
		cout << i << ".-" << equips[i].nom << " " << equips[i].punts << endl;
	}
}

void DesplacarClassificacio(TEquip equips[], int dim1, int pos)
{
	int i;
	for (i = dim1-1; i >=pos; i--)
	{
		equips[i] = equips[i-1];
	}
}

void OmplirDadesEquip(TEquip equips[],int pos)
{
	cout << "Introdueix el nom: ";
	cin >> equips[pos].nom;
	cout << "Introdueix la ciutat: ";
	cin >> equips[pos].ciutat;
	cout << "Introdueix els punts: ";
	cin >> equips[pos].punts;
	cout << "Introdueix el pressupost: ";
	cin >> equips[pos].pressupost;

}


int main()
{
	TEquip equips[N_EQUIPS];
	int pos;
	char seg = 'S';

	InicialitzarClassifiacio(equips, N_EQUIPS);

	while (seg == 'S')
	{
		MostrarClassificacio(equips, N_EQUIPS);

		cout << "Posicio on vols situar les dades de un equip:";
		cin >> pos;
		DesplacarClassificacio(equips, N_EQUIPS, pos);
		OmplirDadesEquip(equips, pos);
		cout << "Vols inserir algun equip mes (S/-)";
		cin >> seg;
	}

	MostrarClassificacio(equips, N_EQUIPS);
}

