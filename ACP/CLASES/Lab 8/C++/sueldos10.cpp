#include "iostream.h"
void main()
{
	double sbasico,aumento,sbruto;
	char estacivil;
	cout<<"\t\tcalcular sueldo\n";
	cout<<"\t\t===============\n";
	estacivil='s';
	cout<<"sueldo basico\t:";cin>>sbasico;
	cout<<"estado cuvil en mayusculas\t\t:";
	cin>>estacivil;
	switch(estacivil)
	{
	case'S':
		aumento=sbasico*0.08;
		break;
	case'C':
		aumento=sbasico*0.15;
		break;
	case'V':
		aumento=sbasico*0.12;
		break;
	default:
		aumento=sbasico*0.11;
		break;
	}

	sbruto=sbasico+aumento;
	cout<<"aumenti\t\t:"<<aumento<<"\n";
	cout<<"sueldo bruto\t:"<<sbruto<<"\n";
}


