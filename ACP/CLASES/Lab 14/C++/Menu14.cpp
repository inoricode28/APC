#include<iostream.h>
#include<stdlib.h>
int suma(int a, int b);
void SUMA();

float potencia(float num,int exp);
void POTENCIA();

int MCD(int a, int b);
void mcd();
void mcdN();
int  mcm(int a, int b);
void MCM();

long Factorial(int num);
void FACTORIAL ();
void FACTORIALN ();

void main()
{
	int x;
	char sn;
	sn = 's';
	while(( sn=='s')||(sn=='s'))
	{
		system("cls");
		cout << "\n    (1) SUMA";
		cout << "\n    (2) POTENCIA";
		cout << "\n    (3) mcd";
		cout << "\n    (4) mcm";
		cout << "\n    (5) MCD de N numeros";
		cout << "\n    (6) Factorial";
		cout << "\n    (7) Factorial de N numero";
		cout <<"\n\nEscribe el numero de la opcion que desees:";cin>>x;
		switch(x)
		{
		case 1:   SUMA();        break;
		case 2:   POTENCIA();    break;
		case 3:   mcd();		 break;
		case 4:   MCM();		 break;
		case 5:   mcdN();		 break;
		case 6:	  FACTORIAL();	 break;
		case 7:	  FACTORIALN();  break;
		default:
			cout << "\n\nEsato no es ninguna opcion";
			break;
		}
		cout << "\n\nQuieres volver a calcular (S/N)?";cin>>sn;
}
}
int suma(int a, int b)
{
	return a+b;
}
float potencia(float num, int exp)
{
	float p;
	p=1;
	for(int i=1;i<=exp;i++) p=p*num;
	return p;
}
int MCD(int a, int b)
{
	int R;
	R = a % b;
	while(R!=0)
	{
		a = b;
		b = R;
		R = a % b;
	}
	return b;
}
int mcm(int a, int b)
{
	return a*b/MCD(a,b);
}
long Factorial(int num)
{
	long f;
	f = 1;
	for(int i=2; i<=num; i++) f = f * i;
	return f;
}
void SUMA()

{
	int n1 , n2, s;
cout<<"Suma de 2 numeros\n\n";
cout<<"Numero 1:";cin>>n1;
cout<<"Numero 2:";cin>>n2;
s = suma(n1,n2);
cout<<"La suma es:"<<s<<"\n";
}

void POTENCIA()
{
	int e;
	float n,p;
	cout<<"Pontecia de un numero\n\n";
	cout<<"Ingrese el numero\t:\t";cin>>n;
	cout<<"Ingrese el exponente\t:\t";cin>>e;
	p=potencia(n,e);
	cout<<"La Ptecia es\t\t:"<<p<<"\n";
}
void mcd()
{
	int A,B;
	cout<<"\t\tMaximo Comun dovisor de 2 numeros \n";
	cout<<"Ingrese el primer numero:";cin>>A;
	cout<<"Ingrese el segundo numero:";cin>>B;

	cout<<"MCD("<< A <<","<< B <<")="<< MCD(A,B) << endl;
}
void MCM()
{
	int A,B;
	cout<<"\t\tMinimo Comun multiplo de 2 numero \n";
	cout<<"Ingrese el primer numero:";cin>>A;
	cout<<"Ingrese el segundo numero:";cin>>B;

	cout<<"mcm("<< A <<","<< B <<")=" << mcm(A,B)<<endl;
}
void mcdN()
{
	int A,B,N;
	cout<<"\t\tMaximo Comun Divisor de N numeros \n";
	cout<<"Ingrese la cantidad de numeros:";cin>>N;

	cout<<"Ingrese el Primer numero:";cin>>A;
	
	for(int i=2; i<=N; i++)
	{
		cout<<"Ingrese el numero"<<i<<" :";cin>>B;
		A = MCD(A,B);
	}
	cout<<"MCD()=" << A << endl;
}

void FACTORIAL()
{
	int N;
	cout<<"\t\t Factorial de un numero \n";
	cout<<"Ingrese el numero:";cin>>N;

	cout<<"Facorial("<< N <<")="<< Factorial(N) << endl;
}
void FACTORIALN()
{
	int N;
	cout<<"\t\t Factorial de los numeros hasta N \n";
	cout<<"Ingrese el numero:";cin>>N;
	for(int i = 1; i<=N; i++)
		cout<<"Factorial(" << i <<") =" << Factorial(i) << endl;
}
	