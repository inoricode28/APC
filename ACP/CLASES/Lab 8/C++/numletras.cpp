#include "iostream.h"
#include "string.h"
void main()
{
	int numero;
	char numletras[25];
	cout<<"\t\t visualizar numeros en letras \n";
	cout<<"\t\t ============================ \n";
	numero=0;
	cout<<" numero \t\t:";cin >>numero;
	if (numero==0)
		strcpy(numletras,"cero");
	else if (numero==1)
		strcpy(numletras,"uno");
	else if (numero==2)
		strcpy(numletras,"dos");
	else if (numero==3)
		strcpy(numletras,"tres");
	else if (numero==4)
		strcpy(numletras,"cuatro");
	else if (numero==5)
		strcpy(numletras,"cinco");
	else if (numero==6)
		strcpy(numletras,"seis");
	else if (numero==7)
		strcpy(numletras,"siete");
	else if (numero==8)
		strcpy(numletras,"ocho");
	else if (numero==9)
		strcpy(numletras,"nueve");
	else if (numero==10)
		strcpy(numletras,"diez");
	else
		strcpy(numletras,"numero fuera del rango");
	cout<<" numero en letras \t:"<<numletras<<"\n";
}
		







