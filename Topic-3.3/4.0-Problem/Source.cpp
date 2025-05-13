#include <iostream>
#include <math.h>
using namespace std;

typedef struct
{
	float x;
	float y;
}TPunt;

typedef struct
{
	int costats;
	TPunt vertex[30];
}TPoligon;

void LlegirPoligon(TPoligon &form1)
{
	int i;
	cout << "Introdueix el numero de vertexs: ";
	cin >> form1.costats;
	cout << "Introdueix les coredenades dels vertexs: ";
	for (i = 0; i < form1.costats; i++)
	{
		cin >> form1.vertex[i].x >> form1.vertex[i].y;
	}
}

float PerimetrePoligon(TPoligon form1)
{
	float per = 0;
	int i;

	for (i = 0; i < form1.costats-1; i++)
	{
		
		per = per + sqrt(pow(form1.vertex[i+1].x - form1.vertex[i].x, 2) + pow(form1.vertex[i + 1].y - form1.vertex[i].y, 2));
	}
	per = per + sqrt(pow(form1.vertex[0].x - form1.vertex[form1.costats -1 ].x, 2) + pow(form1.vertex[0].y - form1.vertex[form1.costats - 1].y, 2));
	return per;
}

int main()
{
	TPoligon form1;
	float per;
	LlegirPoligon(form1);
	per = PerimetrePoligon(form1);
	cout << "Perimetre del poligon: " << per;
}
