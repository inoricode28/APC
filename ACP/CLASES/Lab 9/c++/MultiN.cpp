#include <iostream.h>
void main()
{
	int i, n;
	cout<<"ingrese un numero:";cin>>n;
	cout<<"\t\tTabla del"<<n<<"\n";
	cout<<"\t\t===========\n";
	for (i =1;i<=12 ;i++)	     
	cout<<i<<"*"<<n<<"="<<i*n<<"\n";
}