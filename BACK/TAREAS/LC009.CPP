#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h" 
#include "math.h" // Para usar las funciones sqrt() y pow()

void main(){
	 clrscr();
	 //Finalidad: calculos el area de un triangulo
	 float area, p, a, b, c;
	 //ingreso de datos
	 cout<<"ingresar lado 1:";
	 cin>> a;
	 cout<<"ingresar lado 2:";
	 cin>> b;
	 cout<<"ingresar lado 3:";
	 cin>> c;
	 //realizar calculos
	 p = (a+b+c)/2;
	 area = sqrt(p*(p-a)*(p-b)*(p-c));
	 //salida de datos
	 cout<<"el area es:"<<area;

	 getch();
}