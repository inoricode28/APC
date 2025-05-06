#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

void main(){
	 clrscr();
	 //Finalidad: obtener la velocidad requerida
	 float d, t, v;
	 // //ingreso de datos
	 cout<<"ingresar distancia:";
	 cin>> d;
	 cout<<"ingresar tiempo:";
	 cin>> t;
	 //Realizar calculos
	 v = d/t;
	 //Salida de datos
     cout<<"la velocidad es:"<<v<<"km / hr";     

      getch();      
}