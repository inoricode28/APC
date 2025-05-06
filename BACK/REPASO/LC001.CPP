#include "iostream.h"
#include "conio.h"

void main(){
	 clrscr();
     //Finalidad:realizar operaciones matematicas basicas
     float a, b, s, r, p, d;

     //ingreso de datos 
     cout<<"primer valor:";
     cin>> a;

     cout<<"primer valor:";
     cin>> b;

     //Realizar calculos
     s=a+b;
     r=a-b;
     p=a*b;
     d=a/b;
     //Mostrar datos
     
     cout<<"el resultado de la suma es: "<<s<<"\n";
     cout<<"el resultado de la resta es: "<<r<<"\n";
     cout<<"el resultado de la multiplicacion es: "<<p<<"\n";
     cout<<"el resultado de la divicion es: "<<d<<"\n";


     getch();
}