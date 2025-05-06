#include "iostream.h"

int suma (int a, int b);
	
void main()
{
	int n1, n2, s;
	cout<<"suma de 2 numeros\n\n";
	cout<<"numero 1:"; cin >>n1;
	cout<<"numero 2:"; cin >>n2;
	s=suma(n1,n2);
	cout<<"la suma es:"<<s<<"\n";
}
int suma (int a, int b)
{
	return a+b;
}
 
