#include "iostream.h"

float potencia(float num, int exp);
	
void main()
{
	int e;
	float n,p;
	cout<<"potencia de un numero\n\n";
	cout<<"ingrese el numero \t:\t"; cin>>n;
	cout<<"ingrese el exponente \t:\t"; cin>>e;
	p=potencia(n,e);
	cout<<"la potencia es \t\t:\t"<<p<<"\n";
}
float potencia (float num, int exp)
{
	float p;
	p=1;
	for (int i=1;i<=exp;i++) p=p*num;
	return p;
}
 
