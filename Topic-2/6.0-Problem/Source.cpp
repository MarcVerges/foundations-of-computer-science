#include <iostream>
using namespace std;

int centenes(int num)
{
	int num_cent;
	num_cent = num % 1000 / 100;

	return num_cent;
}
int main()
{
	int a,b;

	cout << "Introduiex el nombre del que vols saber les centenes: ";
	cin >> a;
	b = centenes(a);
	cout << "Les centenes del nombre " << a << "son " << b;

}
