# include <iostream.h>
void main ()
{ int suma,i;
cout<<"\t\t calcular 1+2+3+...+20\n";
cout<<"\t\t====================\n";
suma =0;i=1;
do 
{cout<<i;
if (i<20) cout <<'+';else cout <<'=';
suma=suma + i;
i++;
}
while (i<=20);
cout<<suma <<"\n";
}