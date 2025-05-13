#include <iostream>
using namespace std;
int main()
{
	char a;
	cout << "Introduiex las vocals a convertir a morse: ";
	cin >> a;

	switch (a)
	{
		case 'a':
		case 'A':
		{
			cout << "Vocal " << a << " - Codi Morse: .-";
			break;
		}
		case 'e':
		case 'E':
		{
			cout << "Vocal " << a << " - Codi Morse: .";
			break;
		}
		case 'i':
		case 'I':
		{
			cout << "Vocal " << a << " - Codi Morse: ..";
			break;
		}
		case 'o':
		case 'O':
		{
			cout << "Vocal " << a << " - Codi Morse: ---";
			break;
		}
		case 'u':
		case 'U':
		{
			cout << "Vocal " << a << " - Codi Morse: ..-";
			break;
		}
		default:
		{
			cout << "Error: El caracter introduit no es una vocal";
		}
	}
}
