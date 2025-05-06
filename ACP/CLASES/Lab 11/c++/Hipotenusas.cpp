#include "iostream.h"
#include "math.h"
void main()
{
	double catet1,catet2,hipot;
	char pregunta;
	pregunta='s';
	while ((pregunta=='s')||(pregunta=='S'))
	{ 
		cout<<"\ncalcula de la hipotenusa de un T.R.";
		cout<<"\n===================================";
		cout<<"\n\nintroduce el valor de un cateto:";
		cin>>catet1;
		cout<<"\nintroduce el valor del otro numero:";
		cin>>catet2;
		hipot = sqrt( catet1*catet1+catet2*catet2);
		cout<<"\n\nHIPOTENUSA:"<< hipot;
		cout<<"\nsi quiere calucular otra hipotenusa pulsa";
		cout<<"\la tecla [s] y a continuacion [return],en";
		cout<<"caso contrario pulsa cualquier otra tecla";
		cin>> pregunta;
	}
}

