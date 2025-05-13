#include <iostream>
using namespace std;
int main()
{
	float a;
	int b;
	float c;

	cout << "Introdueix el salari base i els anys d'antiguitat: ";
	cin >> a >> b;

	if (b < 3)
	{
		c = a + (a * 0.01);
		cout << "El salari final es: " << c;
	}

	else
	{
		if ((b >= 3) && (b <= 5))
		{
			c = a + (a * 0.02);
			cout << "El salari final es: " << c;

		}

		else
		{
			c = a + (a * 0.035);
			cout << "El salari final es: " << c;

		}
			
		

	}


}
