#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void main(){
	clrscr(); //Limpia Pantallas
	char nombre[50];
	float precio,cantidad,descuento,igv,subtotal,total; 
    //Ingreso de datos
	cout<<"nombre:";
	cin>> nombre;
	cout<<"precio:";
	cin>> precio;
	cout<< "cantidad: ";
	cin>> cantidad;
	//Realizar calculos
    subtotal = precio*cantidad;
    
    //Salida de datos
    cout<<"nombre:"<<nombre<<"\n";
    cout<<"precio:"<<precio<<"\n";
    cout<<"cantidad:"<<cantidad<<"\n";
    cout<<"descuento:"<<descuento<<"\n";
    cout<<"igv:"<<igv<<"\n";
    cout<<"total:"<<total;

	getch(); //Espera cursor ala vista
}