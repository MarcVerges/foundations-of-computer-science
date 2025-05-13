#include <iostream>
using namespace std;

float exponent(float num_1, float expo_1)
{
	float res_1 = 1;
	float res_2 = 1;

	for (expo_1 > 0; expo_1 > 0; expo_1--)
	{
		res_1 = res_1 * num_1;
	}
	for (expo_1 < 0; expo_1 < 0; expo_1++)
	{
		res_2 = res_2 * num_1;
		res_1 = 1 / res_2;
	}
	return res_1;

}


int main()
{
	float num, expo, res;
	cout << "Introduiex el nombre i el exponent: ";
	cin >> num >> expo;

	res = exponent(num, expo);

	cout << "El resultat d'elevar " << num << " a la potencia " << expo << " es " << res;

}