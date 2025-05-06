#include<iostream.h>
void main ()
{ int suma,i,j;

cout<<"\t\ calcular suma\n";
cout<<"\t\t=============\n";

suma =0; i=1; j=0;
do 
{ cout <<i;
suma+=i;
i+=j;
if (i<1000) cout<<'+';else cout<<'=';
j++;
}
while (i<=1000);
cout<<suma<<"\n";
}

