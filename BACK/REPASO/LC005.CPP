#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

void main(){
     clrscr();
	 //Finalidad: procesar los numeros enteros
	 int suma, num;
	 //Ingreso de datos
	 cout<<"Ingreso de numero entero:";
	 cin>> num;
	 //Realizar calculos
	 suma = (num*(num+1))/2;
	 //Salida de datos
     cout<<"la suma es:"<<suma;

getch();
}