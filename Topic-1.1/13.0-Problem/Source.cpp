#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	
	cout << "introduiex 3 nombres: ";
	cin >> a >> b >> c;

	if (c == a + b)
	{
		cout << "IGUALS ";
	}
	else
	{
		if (a == b + c)
		{
			cout << "IGUALS";
	    }

		else
		{
			if (b == a + c)
			{
				cout << "IGUALS ";
			}

			else
				cout << "DIFERENTS ";
		}
	}

}