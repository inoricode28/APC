#include "iostream.h"
void main ()
{
	int i,j;
	for (i=1; i<=5; i++)
	{
		for (j=i; j<=5; j++)
			cout<<"*";
		cout<<"\n";
	}
}