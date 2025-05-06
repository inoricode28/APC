#include "iostream.h"
void main()
{
	float Sueldobasico, Pagohora;
	int Horastrabajadas;
	cout << "Calculo de sueldo \n";
	cout << "Horas trabajadas : "; cin >> Horastrabajadas;
	cout << "Pago por hora : "; cin >> Pagohora;
	Sueldobasico = Horastrabajadas * Pagohora;
	cout << "Sueldo basico: " << Sueldobasico <<"\n";
}
