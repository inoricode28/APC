#include "iostream.h"

int MCD(int a, int b);
	
void main()
{
	int A,B;
	float n,p;
	cout<<"\t\t maximo comun divisor de 2 numeros\n";
	cout<<"ingrese el primer numero :"; cin>>A;
	cout<<"ingrese el segundo numero :"; cin>>B;
	
	cout<<"MCD ("<<A<<","<<B<<")="<< MCD(A,B)<<endl;
}
int MCD (int a, int b)
{
	int R;
	R=a%b;
	while(R!=0)
	{
	    a=b;
		b=R;
		R=a%b;
	}
 return b;
}