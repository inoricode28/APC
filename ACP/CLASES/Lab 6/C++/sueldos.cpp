#include <iostream.h>
void main ()
{
	double SBasico,Aumento, SBruto;
	short int Edad;
	cout<<"\t\tCalcular sueldo \n";
	cout<<"\t\t=============== \n\n";
	cout<<"Sueldo Basico\t:";cin>>SBasico;
	cout<<"Edad \t\t:";cin>>Edad;
	Aumento=0;
	if (Edad>40) Aumento = SBasico * 0.13;
	SBruto=SBasico+Aumento;
	cout<<"Aumento\t\t:"<<Aumento <<"\n";
	cout<<"sueldo Bruto\t:"<<SBruto <<"\n";
}