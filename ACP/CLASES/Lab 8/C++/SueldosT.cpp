#include <iostream.h>
void main()
{
double SBasico,Aumento, SBruto;
char Sexo, Turno;
cout<< "\t\tCalcular Sueldo \n";
cout<< "\t\t=============== \n";
Sexo='F';
Turno='M';
cout<< "Sueldo Basico\t:";cin >>SBasico;
cout<< "Sexo en mayusculas\t\t:";cin >>Sexo;
cout<< "Turno en mayusculas\t\t:";cin >>Turno;
if (Sexo=='F')
switch (Turno)
	{
	case 'M':
		Aumento = SBasico * 0.11;
		break;
	case 'T':
		Aumento = SBasico * 0.14;
		break;
	case 'N':
		Aumento = SBasico * 0.18;
		break;
	default:
		Aumento = 0;
		break;
	}
else
switch (Turno)
	{
	case 'M':
		Aumento = SBasico * 0.10;
		break;
	case 'T':
		Aumento = SBasico * 0.13;
		break;
	case 'N':
		Aumento = SBasico * 0.17;
		break;
	default:
		Aumento = 0;
		break;
	}
SBruto=SBasico+Aumento;
cout<<"Aumento\t\t:"<<Aumento <<"\n";
cout<<"Sueldo Bruto\t:"<<SBruto <<"\n";

}