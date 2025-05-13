#include <iostream>
using namespace std;
int main()
{
	int a, b, c;

	cout << "INtrodueix num: ";
	cin >> a;
	b = a;
	c = 0;


	while (b > 0)
	{
		if (a % b == 0)
		{
			c++;
		}

		b--;
	}
	if (c == 2)
	{
		cout << "PRIMER";
	}
	else
	{
		cout << "NO PRIMER";
	}

} 