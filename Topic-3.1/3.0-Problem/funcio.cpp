#include <iostream>

using namespace std;

void Majuscules(char v1[])
{
	int i = 0;

	while (v1[i] != '\0')
	{
		if (int(v1[i]) > 96)
		{
			v1[i] = int (v1[i]) - 32;
			v1[i] = char(v1[i]);
		}
	
		
		i++;
	}
}