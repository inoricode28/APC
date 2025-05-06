# include <iostream.h>

long factorial (int num); 
void main ()
{
	int N;
	cout<<"\t\t factorial de los numeros hasta N\n";
	cout<<"ingrese el numero :";cin >>N;
	for (int i=1; i<=N; i++)

	cout<<"factorial("<<i<<")="<<factorial (i)<<
	endl;
}
long factorial (int num)
{
	long f;
	f =1;
	for (int i=2;i<=num; i++)f=f*i;

	return f;
}