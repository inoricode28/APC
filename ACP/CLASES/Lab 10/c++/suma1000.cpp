#include "iostream.h"
void main ()
{int suma,i,j;
	cout<<"\t\tcalcular 1+2+3+..+20\n";
	cout<<"\t\t====================\n";
	suma=0;i=1;j=0;
	while (i<1000)
	{ 
		cout<<i;
		suma+=i;
		i+=j;
		if(i<1000)cout<<'+'; else cout <<'=';
		j++;
	}
	cout<<suma<<"\n";
}

