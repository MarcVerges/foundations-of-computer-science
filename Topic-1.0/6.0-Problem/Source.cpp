#include <iostream>
using namespace std;
int main()
{
	int a,b;
	bool res;

	cout << "introduiex les cordenades x i y: ";
	cin >> a >> b;
	

	res = ((a >= 0) && (a <= 10)) && ((b >= 0) && (b <= 10));

	cout << "El resultat es: " << res;

}