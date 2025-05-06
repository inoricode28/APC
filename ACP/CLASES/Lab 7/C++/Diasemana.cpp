#include "iostream.h"
void main ()
{
	int NumDia;
	char *NombreDia;
	cout<<"\t\tVisualizar nombre del Dia de la semana\n";
	cout<<"\t\t======================================\n";
	NumDia='0';
	cout<<"\t\tNumero del Dia de la semana:";cin>>NumDia;
	
	if (NumDia==1)
			NombreDia="Domingo";
	else if (NumDia==2)
		NombreDia="Lunes";
	else if (NumDia==3)
		NombreDia="Martes";
	else if (NumDia==4)
		NombreDia="Miercoles";
	else if (NumDia==5)
		NombreDia="Jueves";
	else if (NumDia==6)
		NombreDia="Viernes";
	else if (NumDia==7)
		NombreDia="Sabado";
	else
		NombreDia="Numero fuera del rando";
	cout<<"Numero del Dia de la semana\t:"<<NombreDia<<"\n";

}
