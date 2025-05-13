#include <iostream>
using namespace std;
int main()
{
 int a,b;
 cout << "Introduiex num: ";
 cin >> a;
 b = 0;
 while (a != 0)
 {
	 if (a % 2 == 0)
	 {
		 b++;
	 }
	 cout << "Introduiex num: ";
	 cin >> a;
	  
 }
 if (b != 0)
 {
	 cout << "Algun nombre de la sequencia es parell.";
 }
 else
 {
	 cout << "No hi ha cap nombre parell en la sequencia.";
 }

}