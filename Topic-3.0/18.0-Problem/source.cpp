#include <iostream>
#include "funcions.h"

using namespace std;

int main()
{
	int const dim = 5;
	int v1[dim];
	int v2[dim];
	int i;
	bool iguals;
	cout << "Introdeuix la array:" << endl;
	
	LlegirVectror(v1, dim);
	LlegirVectror(v2, dim);
	iguals = InversArray(v1, dim);
	cout << iguals;


}