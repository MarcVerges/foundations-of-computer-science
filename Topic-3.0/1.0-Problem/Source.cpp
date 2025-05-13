#include <iostream>
using namespace std;
int main ()
{
	//constants
	int const Long = 10;
	//variables
	int op;
	int i;
	int a[Long];
	cin >> op;
	 
	for (i = 0; i < Long; i++) //amb aixó estableixo tot els valor des del 0 fins del Long com a op
	{
		a[i] = op;
		cout << a[i] << endl;
	}
	


}