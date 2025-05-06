#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h" 
#include "math.h" // Para usar las funciones sqrt() y pow()

void main(){
	 clrscr();
	 //Finalidad: ingresar un valor numerico y mostrar en formato de fecha
	 int d, m, a;
	 //ingreso de datos
	 cout<<"ingresar dia 1-31: ";
	 cin>> d;
	 cout<<"ingresar mes 1-12: ";
	 cin>> m;
	 cout<<"ingresar anio 1990-2002: ";
	 cin>> a;
	 //Salida de datos
	 cout<<"fecha ingresada es: "<<d<<"/"<<m<<"/"<<a;

     getch();
}	 