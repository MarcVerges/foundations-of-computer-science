#include <iostream>
using namespace std;

//factorial
int Factorial(int n)
{
	int total;
	total = 1;
	while (n > 1)
	{
		total = total * n;
		n--;
	}
	return total;
}

//suma
int Suma(int n)
{
	int total;
	total = 0;
	while (n >= 1)
	{
		total = total + n;
		n--;
	}
	return total;
}

//calculadora
void Calcular(int n, int &fac, int &sum)
{
	fac = Factorial(n);
	sum = Suma(n);
}


int main()
{
	int n, fac, sum;
	cin >> n;
	Calcular(n, fac, sum);
	cout << n << " " << fac <<" " << sum;
	return 0;
}