#include "iostream.h"
void main ()
{int suma,i;
	cout<<"\t\tcalcular 1+2+3+..+20\n";
	cout<<"\t\t====================\n";
	suma=0;i=1;
	while (i<=211)
	{ 
		cout<<i;
		if(i<211)cout<<'+'; else cout <<'=';
		suma=suma+i;
		i+=3;
	}
	cout<<suma<<"\n";
}

