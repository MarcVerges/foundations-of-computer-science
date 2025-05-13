#include <iostream>
using namespace std;
int main()
{
	int num1;
	int num2;
	
	cout << "introdueix els nombres a ordenar: ";
	cin >> num1 >> num2;

	if (num1 > num2)
	{
		cout << "El valor de num1 es " << num2 << " i el valor de num2 es " << num1 ;
	}
	else 
		cout << "El valor de num1 es " << num1 << " i el valor de num2 es " << num2 ;

}