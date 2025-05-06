#include "iostream.h"
void main()
{
	double Sbasico, Aumento, Sbruto;
	char Sexo;
	cout<<"\t\tCalcular Sueldo\n";
	cout<<"\t\t===============\n";
	Sexo='F';
	cout<<"Sueldo basico\t;";cin>>Sbasico;
	cout<<"Sexo\t\t:";cin>>Sexo;
	if (Sexo=='F')
		Aumento=Sbasico*0.08;
	else 
		Aumento=Sbasico*0.055;
	Sbruto=Sbasico+Aumento;
	cout<<"Aumento\t\t:"<<Aumento<<"\n";
	cout<<"Sueldo bruto\t:"<<Sbruto<<"\n";
}