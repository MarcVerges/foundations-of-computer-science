#include <iostream>
#include "vectors.h"
using namespace std;
#define dim 2
int main()
{
	int v1[dim];
	int mitj;
	
	LlegirVector(v1, dim);
	mitj = MitjanaVector(v1, dim);
	cout << mitj;




}