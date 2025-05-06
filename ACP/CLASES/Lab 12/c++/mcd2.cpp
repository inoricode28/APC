# include <iostream.h>
int MCD (int a, int b);
void main ()
{
	int A,B,N;
	cout<<"\t\t maximo  comun divisor de N numeros\n";
	cout<<"ingrese la cantidad de numeros:";cin >>N;
	cout<<"ingrese el primer numero:";cin >>A;
	for (int i=2;i<=N;i++)
	{
	cout<<"ingrese el numero"<<i<<":";cin >>B;
	A =MCD (A,B);
	}
	cout <<"MCD()="<<A<<endl;
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