#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h" 
#include "math.h" // Para usar las funciones sqrt() y pow()

void main(){
     clrscr();
	 //Finalidad: Procesar formula y obtener el area
	 float l, area;
	 //ingreso de datos
	 cout<<"ingrese valor del lado:";
	 cin>> l;
	 //Realizar calculos
	 area = (pow(l, 2) * sqrt(3)) / 4;
	 //Salida de datos
	 cout<<"el area es: " << area;

	 getch();	
}   
   