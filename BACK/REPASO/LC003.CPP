#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

void main(){
	clrscr();
	//Finalidad: procesar datos de un articulo
	char descrip[50];
	int Stock;
	char precio, ganancia, pventa,valoriza;

	//Ingreso de datos
	cout<<"descripcion del articulo:";
	cin>> descrip;
	cout<<"precio de compra:";
	cin>> precio;
	cout<<"porcentaje de ganancias:";
	cin>> ganancia;
	cout<<"numero de unidades Stock:";
	cin>> Stock;
	//Realizando calculos
	pventa=precio+precio*(ganancia/100);
	valoriza=pventa*Stock;
	//Salida de datos
	cout<<"el precio de ventas es :"<<pventa<<("\n");
	cout<<"la valorizacion es :"<<valoriza;

getch();
}	 