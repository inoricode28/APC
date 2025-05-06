#include "iostream.h"
void main ()
{
	double Sbasico, Aumento, Sbruto;
	char Sexo;
	int NumHijos;
	cout<<"\t\tCalcular Sueldo\n";
	cout<<"\t\t===============\n";
	Sexo='F';
	cout<<"Sueldo basico\t:";cin>>Sbasico;
	cout<<"Sexo\t\t:";cin>>Sexo;
	cout<<"NumHijos\t\t:";cin>>NumHijos;
	if (Sexo=='f')
	{
		if (NumHijos<=0)
			Aumento=50;
		else
			Aumento=120;
	}
	else
	{
		if (NumHijos<=0)
			Aumento=60;
		else
			Aumento=110;
	}
	Sbruto=Sbasico+Aumento;
	cout<<"Aumento\t\t:"<<Aumento<<"\n";
	cout<<"Sueldo bruto\t:"<<Sbruto<<"\n";
}
