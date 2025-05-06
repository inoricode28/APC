#include <iostream.h>
void main()
{
	int suma;
	cout<<"\t\tcaluclar 1+2+3+..+20\n";
	cout<<"\t\t====================\n";
	suma=0;
	for (int i =1;i<=20 ;i++)	     
		suma = suma + i;
	cout<<"la suma es :\t:"<<suma<<"\n";
}