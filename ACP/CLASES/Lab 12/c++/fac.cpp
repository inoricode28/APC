# include <iostream.h>
long factorial (int num);
void main ()
{
	int N;
	cout<<"\t\t factorial  de un numero \n";
	cout<<"ingrese el numero :";cin >>N;
	cout<<"factorial ("<<N<<")="<<factorial (N)<<endl;
}
	long factorial (int num)
	{
long f;
f=1;
for (int i=2;i<=num; i++) f=f*i;
return f;
	}
	
