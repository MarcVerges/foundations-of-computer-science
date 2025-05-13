#include <iostream>
#include "vectors.h"
using namespace std;
#define dim 8
int main()
{
	int num1, v1[dim];
	int mitj;
	cout << "Introdeuix el valor per incialitzar: ";
	cin >> num1;

	InicialitzarVector ( v1, num1 , dim);
	LlegirVector(v1, dim);
	EscriureVector(v1, dim);
	mitj = MitjanaVector(v1, dim);

}