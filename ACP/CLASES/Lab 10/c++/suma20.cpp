#include "iostream.h"
void main ()
{int suma,i;
	cout<<"\t\tcalcular 1+2+3+..+20\n";
	cout<<"\t\t====================\n";
	suma=0;i=1;
	while (i<=20)
	{ 
		suma=suma+i;
		i++;
	}
	cout<<"la suma es :\t:"<<suma<<"\n";
}

