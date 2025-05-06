#include "iostream.h"
void main ()
{int suma, i;
	cout<<"\t\tcalcular1+5+9+..+49\n";
	cout<<"\t\t===================\n";
	suma=0;
		for (i=1; i<=49; i+=4)
			suma=suma+i;
		cout<<"la suma es:\t:"<<suma<<"\n";
	}

