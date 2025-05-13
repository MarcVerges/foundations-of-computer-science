#include <iostream>

using namespace std;

int main()
{
	// declaracio
	char d;

	// input
	cout << "introduiex una lletra: ";
	cin >> d;

	//output
	if ((d == 'a') || (d == 'e') || (d == 'i') || (d == 'o') || (d == 'u') ||
		(d == 'A') || (d == 'E') || (d == 'I') || (d == 'O') || (d == 'U'))
	   {
	   cout << "Vocal";
	   }
	else
	{
		cout << "Consonant";
	}
	cout << endl;

}