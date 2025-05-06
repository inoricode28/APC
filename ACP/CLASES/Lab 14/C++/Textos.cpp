#include<iostream.h>
#include<stdlib.h>
#include"string.h"
#include"ctype.h"


void Mayor();

void Cantidad();



void main()
{
	int x;
	char sn;
	sn='s';
	while((sn=='s')||(sn=='s'))

	{
		system("cls");
		
		cout<<" \n    (1) Mayor";
		cout<<" \n    (2) Cantidad";

		cout<<" \n\n Escoja la opcion que desees:";cin>>x;
		switch(x)
		{
		case 1: Mayor();   break;

		case 2: Cantidad();   break;
		

			
		default:
			cout<<"\n\nEsto no es ninguna opcion";
			break;
		}
		cout<<"\n\nQuieres volver a calcular (S/N)";cin>>sn;
	}
}
void Mayor()
{
	int l,i;
	char cad1[10],cad2[10];
	cout<<"Textos en MAYUSCULAS\n\n";
	l=strlen(cad1);
	cout<<"Ingrese el texto en minusculas:";cin>>cad1;
	for(i=0;i<=l-1;i++) cad2[i]=toupper(cad1[i]);
	cout<<"Eltexto en mayusculas es:"<<cad2<<"\n";
}
void Cantidad()
{
	int l,i;
	char cantF,cantM;

	cout<<"hay personas(s/n):"; cin
	l=strlen(cad1);
    cout<<"Ingrese el texto en MAYUSCULAS:";cin>>cad1;
	for(i=0;i<=l-1;i++) cad2[i]=tolower(cad1[i]);
	cout<<"El texto en minusculas es:"<<cad2<<"\n";
}
