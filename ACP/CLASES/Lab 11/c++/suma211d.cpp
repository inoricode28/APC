#include<iostream.h>
void main ()
{ int suma,i;
cout<<"\t\ calcular suma\n";
cout<<"\t\t=============\n";

suma =0; i=1;
do 
{ cout <<i;
if (i<211) cout<<'+';else cout<<'=';
suma =suma +i ;
i+=3;
}
while (i<=211);
cout<<suma<<"\n";
}

