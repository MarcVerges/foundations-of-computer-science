#include <iostream>
#include <string.h>
using namespace std;
#define dim 70

bool Palindrom(char v1[])
{
	int num = strlen(v1);
	int min = 0;
	int max = num -1;
	bool res = true;

	while (min < max)
	{
		if (v1[min] != v1[max])
		{
			res = false;
		}

		min++;
		max--;
	}

	return res;		
}

int main()
{
	char v1[dim];
	bool res;
	cout << "Introdeuix els carcters: ";
	cin >> v1;

	res = Palindrom(v1);
	cout << res;
	



}