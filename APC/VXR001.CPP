#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void main(){
	clrscr(); //Limpia Pantallas
	char nombre[50];
	float precio,cantidad,descuento,igv,porcen=0.18, porDes=0.10,subtotal,total; 
    //Ingreso de datos
	cout<<"nombre:";
	cin>> nombre;
	cout<<"precio:";
	cin>> precio;
	cout<< "cantidad: ";
	cin>> cantidad;
	
	//Realizar calculos
    subtotal=precio*cantidad;
	igv=subtotal*porcen;
	///Descuento
	if(cantidad>=5){
		descuento = subtotal*porDes;
		subtotal = precio*cantidad-descuento;
		igv = subtotal*porcen;		
	}else{
		descuento=0;
	}

    total = subtotal+(subtotal*porcen);
	//100*0.18=18
	//igv=18
    
	//Salida de datos
    cout<<"nombre:"<<nombre<<"\n";
    cout<<"precio:"<<precio<<"\n";
    cout<<"cantidad:"<<cantidad<<"\n";
    cout<<"descuento:"<<descuento<<"\n";
    cout<<"igv:"<<igv<<"\n";
    cout<<"total:"<<total;

	getch(); //Espera cursor ala vista
}

// el 18% sale de 18/100=0.18
//igv = 0.18