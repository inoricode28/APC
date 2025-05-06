#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void main(){
	 clrscr();
	 //Finalidad: obtener el igv del total de ventas
     
     //Constantes
     float igv=0.18;

     //Variables
     char cod[50], arti[50];
     float prec, venta, monto;
     int cant;
     //ingreso de datos
     cout<<"ingrese codigo:";
     cin>> cod;
     cout<<"ingrese articulo:";
     cin>> arti;
     cout<<"ingrese precio:";
     cin>> prec;
     cout<<"ingrese cantidad:";
     cin>> cant;
     //Realizar calculos
     venta = prec * cant;
     monto = venta+(venta*igv);
     //Salida de datos
     cout<<"el total de ventas es:"<<venta<<"\n";
     cout<<"el monto total de ventas es:"<<monto;

     getch();
}