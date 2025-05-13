#include <iostream>
using namespace std;


int factorial(int num)
{
	int valor = 1;
	while (num > 0)
	{
		valor = valor * num; // valor *= num
		num--;
	}
	return valor;
}
int main()
{
	int jp, ja, c,res;
	int jp_fact = 1, ja_fact = 1, c_fact = 1;
	cout << "Introduiex el nombre de jugadors en plantilla i el numero de jugadors que pots alinear: ";
	cin >> jp >> ja;

	c = jp - ja;

	jp_fact = factorial(jp);
	ja_fact = factorial(ja);
	c_fact = factorial(c);
	res = jp_fact / (ja_fact * c_fact);
	cout << "El nombre d'equips que es poden formar es " << res;
}
