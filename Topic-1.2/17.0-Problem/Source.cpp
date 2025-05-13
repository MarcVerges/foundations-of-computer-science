#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	b = 1;
	c = 3;
	for (a = 1; a <= 10; a++)
	{
		cout << a << " ";
	}
	cout << endl;
	for (a = 25; a <= 35; a++)
	{
		cout << a << " ";
	}
	cout << endl;
	for (a = 50; a <= 80; a = a + 2)
	{
		cout << a << " ";
	}
	cout << endl;
	for (a = 3; c <= 50; c = a * b)
	{
		cout << c << " ";
		b++;
		
	}
}