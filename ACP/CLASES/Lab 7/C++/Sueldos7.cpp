#include "iostream.h"
void main()
{
	double Sbasico, Aumento, Sbruto;
	short int Edad;
	cout<<"\t\tSalcular Sueldo\n";
	cout<<"\t\t===============\n\n";
	cout<<"Sueldo basico\t:";cin>>Sbasico;
	cout<<"Edad\t\t:";cin>>Edad;
	if (Edad>40)
		Aumento=Sbasico*0.13;
	else
		Aumento=Sbasico*0.1;
	Sbruto=Sbasico+Aumento;
	cout<<"Aumento\t\t:"<<Aumento<<"\n";
	cout<<"Sueldo bruto\t:"<<Sbruto<<"\n";
}


