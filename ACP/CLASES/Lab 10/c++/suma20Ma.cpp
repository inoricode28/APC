#include "iostream.h"
void main ()
{int suma,i;
	cout<<"\t\tcalcular suma\n";
	cout<<"\t\t=============\n";
	suma=0;i=1;
	while (i<=20)
	{ 
		cout<<i;
		if (i<20) cout<<'+'; else cout<<'=';
		suma=suma+i;
		i++;
	}
	cout<<suma<<"\n";
}

