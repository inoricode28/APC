#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

void main(){
	clrscr();
	//finalidad:procesar datos de un articulo
	char Descrip[50];
	int Stock;
	float precio, ganancia, pventa, valoriza;
  
	//Ingreso de datos
	cout<<"descripcion del articulo: ";
	cin>> Descrip;
	cout<<"precio de compra: ";
	cin>> precio;
	cout<<"porcentaje de ganancia: ";
	cin>> ganancia;
	cout<<"numero de unidades en Stock: ";
	cin>> Stock;
  
	//Realizando calculos
	pventa = precio + precio*(ganancia/100);
	valoriza = pventa * Stock;
  
	//Salida de datos
	cout<<"el precio de venta es  :"<<pventa<<("\n");
	cout<<"la valorizacion es :"<<valoriza;

	getch();   
}