#include "iostream.h"
#include "string.h"
void main()
{
	int numdia;
	char diasemana[25];
	cout<<"\t\tdia de la semana\n";
	cout<<"\t\=================\n";
	strcpy(diasemana,"");
	cout<<"numero del dia de la semana\t\t:";
	cin>>numdia;
	switch(numdia)
	{
	case 1:
		strcpy(diasemana,"domingo");
		break;
	case 2:
		strcpy(diasemana,"lunes");
		break;
	case 3:
		strcpy(diasemana,"martes");
		break;
	case 4:
		strcpy(diasemana,"miercoles");
		break;
	case 5:
		strcpy(diasemana,"jueves");
		break;
	case 6:
		strcpy(diasemana,"viernes");
		break;
	case 7:
		strcpy(diasemana,"sabado");
		break;
	default:
		strcpy(diasemana,"numero dia no valido");
		break;
	}
	cout<<"numero del dia de la semana\t:"<<diasemana<<"\n";
}





