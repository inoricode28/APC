#include "iostream.h"
void main()
{
	int A,B,X,Y,R,MCD;
	cout<<"\t\t maximo comun divisor de 2 numeros \n";
	cout<<"ingrese el primer numero :"; cin >>A;
	cout<<"ingrese el segundo numero :"; cin >>B;
	X=A;
	Y=B;
	R=X % Y;
	while (R!=0)
	{
		X=Y;
		Y=R;
		R=X % Y;
	}
	MCD = Y;
		cout<<"MCD("<<A<<","<<B<<")="<<MCD<<
		endl;
		}
