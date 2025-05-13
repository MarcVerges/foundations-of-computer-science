#include <iostream>
using namespace std;
int main()
{
	int a, n;
	cout << "Introdueix n: ";
	cin >> n;

	for (a = 1; a <= n; a = a * 2)
	{
		cout << a << " ";
	}
}
