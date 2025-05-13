#include <iostream>
#include "funcions.h"
using namespace std;

int main()
{

	int v1[5];
	int i;
	bool res;


	for (i = 0; i < 5; i++)
	{
		cin >> v1[i];
	}

	res = OrdenatDecreixent(v1, 5);
	cout << res;



}
