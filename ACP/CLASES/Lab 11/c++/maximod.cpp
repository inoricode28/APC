# include  <iostream.h>
void main ()
{
	int a,b,x,y,r,mcd;
	cout <<"\t\t maximo comun divisor de 2 numeros\n";
	do {
		cout <<" ingrese el primer numero :";cin >>a;
	}while(a<=0);
	do {
	cout <<"ingrese el segundo numero :";cin>>b;
	}while(b<=0);
	x=a;y=b;r=x%y;
	while (r!=0)
	{x=y;
	y=r;
	r=x%y;
	}
	mcd =y;
	cout<<"mcd("<<a<<","<<b<<")="<<mcd<<endl;
}