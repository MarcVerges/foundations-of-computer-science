#include <iostream>
using namespace std;

typedef struct
{
	char nom[70];
	char ciutat[70];
	float punts ;
	float pressupost ;
}TEquip;


void OmplirDadesEquip(TEquip &equip)
{
	cout << "Introdueix el nom: ";
	cin >> equip.nom;
	cout << "Introdueix la ciutat: ";
	cin >> equip.ciutat;
	cout << "Introdueix els punts: ";
	cin >> equip.punts;
	cout << "Introdueix el pressupost: ";
	cin >> equip.pressupost;

}
void MostrarDadesEquip(TEquip equip)
{
	cout << equip.nom << " " << equip.ciutat << " " << equip.punts << " " << equip.pressupost << endl;
}
int CompararEquips(TEquip equip1, TEquip equip2)
{
	int ret = 0;

	if (equip1.punts < equip2.punts)
	{
		ret = -1;
	}
	if (equip1.punts == equip2.punts)
	{
		ret = 0;
	}
	if (equip1.punts > equip2.punts)
	{
		ret = 1;
	}
	return ret;
}
int main()
{
	TEquip equip1 = { "c", "c",0,0 };
	TEquip equip2 = { "c", "c",0,0 };
	int ret;

	OmplirDadesEquip(equip1);
	OmplirDadesEquip(equip2);
	MostrarDadesEquip(equip1);
	MostrarDadesEquip(equip2);
	ret = CompararEquips(equip1, equip2);

	switch (ret)
	{
		case -1:
		{
			cout << equip1.nom << " te menys punts a la lliga que " << equip2.nom;
			break;
		}
		case  0:
		{
			cout << equip1.nom << " te els mateixos punts a la lliga que " << equip2.nom;
			break;
		}
		case 1:
		{
			cout << equip1.nom << " te mens punts a la lliga que " << equip2.nom;
			break;
		}
	}
}

