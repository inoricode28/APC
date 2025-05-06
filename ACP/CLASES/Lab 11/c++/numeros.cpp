#include "iostream.h"
void main()
{
	double num,sum,pro;
	sum=0;
	pro=1;
	cout<<"escribe un numero diferente de 0=";
	cin>>num;
	while (num!=0)
	{ 
		sum=sum+num;
		pro=pro*num;
		cout<<"\nNumero=" << num;
		cout<<" suma=" << sum;
		cout<<"producto=" << pro;
		cout<<"\nNumero numero (para acabar de escibir 0)=";
		cin>>num;
}
	cout<<"\n\n\nSuma total="<<sum;
	cout<<"\nProducto="<<pro<<"\n";
}

