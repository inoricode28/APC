#include "iostream.h"
void main ()
{
	double Sbasico, Aumento, Sbruto;
	char EstaCivil;
	cout<<"\t\tCalcular Sueldo\n";
	cout<<"\t\t===============\n";
	EstaCivil='F';
	cout<<"Sueldo basico\t:";cin>>Sbasico;
	cout<<"EstaCivil\t\t:";cin>>EstaCivil;
	if (EstaCivil=='S')
			Aumento=Sbasico*0.08;
		else if (EstaCivil=='C')
			Aumento=Sbasico*0.15;
	else if (EstaCivil=='V')
			Aumento=Sbasico*0.12;
		else
			Aumento=Sbasico*0.11;
	Sbruto=Sbasico+Aumento;
	cout<<"Aumento\t\t:"<<Aumento<<"\n";
	cout<<"Sueldo bruto\t:"<<Sbruto<<"\n";
}
