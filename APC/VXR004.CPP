#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

//variables globales 
float precio1, precio2, precio3, precio4,subtotal,porcentaje=0.18,igv,total;

void facturacion(float p_precio1,float p_precio2,float p_precio3,float p_precio4){
	//operacion
	subtotal=p_precio1+p_precio2+p_precio3+p_precio4;
	igv=subtotal*porcentaje;
	total=igv+subtotal;
    cout<<"Mostrar subtotal: "<<subtotal<<"\n";
    cout<<"Igv: "<<igv<<"\n";
    cout<<"Mostrar total: "<<total;


}

void main(){
	clrscr();
	
	cout<<"Ingrese Precio 1: ";
    cin>>precio1;
    cout<<"Ingrese Precio 2: ";
    cin>>precio2;
    cout<<"Ingrese precio 3: ";
    cin>>precio3;
    cout<<"Ingrese precio 4: ";
    cin>>precio4;

    facturacion(precio1,precio2,precio3,precio4);


	getch();
}