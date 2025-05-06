#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

void main(){
	clrscr();
	 //Finalidad: Procesar formula centigrado por farenheit
	 float c, f;
	 //ingreso de datos
	 cout<<"ingresar grados centigrados:";
	 cin>> c;
	 //Realizar calculos
	 f = 1.8*c+32;
	 //Salida de datos
	 cout<<"en grados farenheit valen:"<<f;

	 getch();
}