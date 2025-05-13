#include <iostream>
using namespace std;

int main()
{
	
	float v1[10] = { 0,1,2,3,4,5,6,7,8,9 };
	float v2[10];
	float v3[10];
	int v4[10];
	int i;

	//incialització
	for (i = 0; i < 10; i++)
	{
		v2[i] = v1[i] * 2;
		
	}
	for (i = 0; i < 10; i++)
	{
		cin >> v3[i];
	}
	for (i = 0; i < 10; i++)
	{
		v4[i] = (v1[i] + v2[i]) + v3[i];
	}
	//output
	cout << "Vector 1: ";
	for (i = 0; i < 10; i++)
	{
		cout << v1[i] << " " ;
	}
	cout << endl;
	cout << "Vector 2: ";
	for (i = 0; i < 10; i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;
	cout << "Vector 3: ";
	for (i = 0; i < 10; i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;
	cout << "Vector 4: ";
	for (i = 0; i < 10; i++)
	{
		cout << v4[i] << " ";
	}
	

}