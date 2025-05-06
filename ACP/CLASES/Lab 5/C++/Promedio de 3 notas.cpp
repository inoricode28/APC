#include <iostream.h>
void main ()
{
	float nota1, nota2, nota3;
	float promedio;
	cout<<"Promedio de 3 notas\n\n";
	cout<<"\t Dame la primera nota :";cin>>nota1;
	cout<<"\t Dame la segunda nota :";cin>>nota2;
	cout<<"\t Dame la tercera nota :";cin>>nota3;
	promedio=(nota1 + nota2 + nota3) / 3;
	cout<<"\n\n\n\t\t";
	cout<<"El promedio es "<<promedio;
	cout<<"\n\n\t";
}