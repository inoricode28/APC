#include "iostream.h"
void main ()
{
	int i,j,a;
	cout<<"ingrese el numero de asteriscos:";cin>>a;
	for (i=1; i<=a; i++)
	{
		for (j=1; j<=a; j++)
			cout<<"*";
		cout<<"\n";
	}
}

