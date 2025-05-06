# include <iostream.h>
int MCD (int a, int b);
int mcm (int a, int b);
void main ()
{
	int A,B;
	cout<<"\t\t minimo comun multiplo de 2 numeros\n";
	cout<<"ingrese el primer numero :";cin >>A;
	cout<<"ingrese el segundo numero:";cin >>B;
	cout<<"mcm("<<A<<","<<B<<")="<< mcm(A,B)<<
		endl;
}
int MCD (int a, int b)
{
	int r;
	r = a % b;
	while (r!=0)
	{
		a=b;
		b=r;
		r=a %b;
	}

	return b;
}
int mcm (int a, int b)
{
	return a*b/MCD (a,b);
}