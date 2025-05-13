#include <iostream>
using namespace std;
int main()
{
	int a;


	cout << "Insereix un any: ";
	cin >> a;

	if ((0 == a % 4 ) && (0 != a % 100) || (0 == a % 400) )
	{
		cout << "A l'any " << a << " febrer te 29 dies";
	}
	else 
	{
        cout << "A l'any " << a << " febrer te 28 dies";
	}


}