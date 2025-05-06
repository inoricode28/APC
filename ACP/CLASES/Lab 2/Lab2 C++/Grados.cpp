#include "iostream.h"
#include "conio.h"
void main()
{
	double fahr , celsius;
	cout << "Ingrese grados Fahrenheit :" ;
	cin >> fahr;
		celsius = (5.0/9.0)*(fahr - 32.0);
	cout << "Grados celsius :" << celsius <<"\n";
}