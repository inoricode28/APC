#include "iostream.h"
void main ()
{
	double Sbasico, Aumento, Sbruto;
	char Sexo;
	int Edad;
	cout<<"\t\tCalcular Sueldo\n";
	cout<<"\t\t===============\n";
	Sexo='F';
	cout<<"Sueldo basico\t:";cin>>Sbasico;
	cout<<"Sexo\t\t:";cin>>Sexo;
	cout<<"Edad\t\t:";cin>>Edad;
	if (Sexo=='f')
	{
		if (Edad<40)
			Aumento=Sbasico*0.13;
		else
			Aumento=Sbasico*0.15;
	}
	else
	{
		if (Edad<=42)
			Aumento=Sbasico*0.11;
		else
			Aumento=Sbasico*0.14;
	}
	Sbruto=Sbasico+Aumento;
	cout<<"Aumento\t\t:"<<Aumento<<"\n";
	cout<<"Sueldo bruto\t:"<<Sbruto<<"\n";
}
