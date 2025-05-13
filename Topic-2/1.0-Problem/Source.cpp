#include <iostream>
#include <cstdlib>
using namespace std;


int aleatori(int min, int max)
{
	int num_al;
		
	num_al = (rand() % (max - min + 1)) + min;

	return num_al;
}

int main()
{
	int min, max;
	int valor;
	cout << "Intordueix el mainim i el maxim: ";
	cin >> min >> max;

	valor = aleatori(min, max);

	cout << "Numero aleatori entre els valors minim i maxim : " << valor;

}