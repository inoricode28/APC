#include "iostream.h"
void main ()
{
	int i,j;
	for (i=1; i<=5; i++)
	{
		for (j=1; j<=5-1; j++)
			cout<<" ";
		for (j=1; j<=i; j++)
			cout<<"*";
		cout<<"\n";
	}
}