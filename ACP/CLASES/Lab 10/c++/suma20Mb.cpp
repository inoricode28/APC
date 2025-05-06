#include "iostream.h"
void main ()
{int suma,i;
	cout<<"\t\tcalcular 1+2+3+..+20\n";
	cout<<"\t\t====================\n";
	suma=0;i=0;
	while (i<20)
	{ 
		i++;
		cout<<i;
		if(i<20)cout<<'+';
		else cout <<'=';
		suma=suma+i;
	}
	cout<<suma<<"\n";
}

