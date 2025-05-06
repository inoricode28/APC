#include <iostream.h>
#include "string.h"
void main()
{
int Numero;
char NumRomanos[25];
cout<< "\t\tNumero en Romano \n";
cout<< "\t\t================ \n";
strcpy(NumRomanos,"");
cout<< "Numero \t\t:";cin >>Numero;

	switch (Numero)
	{
	case 1:
		strcpy (NumRomanos , "I");
		break;
	case 2:
		strcpy (NumRomanos , "II");
		break;
	case 3:
		strcpy (NumRomanos , "III");
		break;
	case 4:
		strcpy (NumRomanos , "IV");
		break;
	case 5:
		strcpy (NumRomanos , "V");
		break;
	case 6:
		strcpy (NumRomanos , "VI");
		break;
	case 7:
		strcpy (NumRomanos , "VII");
		break;
	case 8:
		strcpy (NumRomanos , "VIII");
		break;
	case 9:
		strcpy (NumRomanos , "IX");
		break;
	case 10:
		strcpy (NumRomanos , "X");
		break;
	default:
		strcpy (NumRomanos , "Numero fuera del rango");
		break;
	}
cout<<"Numero en Romanos\t:"<<NumRomanos<<"\n";
}