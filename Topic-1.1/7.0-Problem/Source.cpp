#include <iostream>
using namespace std;
int main()
{
	char a;
	cout << "Introduiex una lletra: ";
	cin >> a;

	switch (a)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		{
			cout << "Vocal";
			break;
		}
	    default:
		{
			cout << "Consonant";
			break;
		}
	}
}