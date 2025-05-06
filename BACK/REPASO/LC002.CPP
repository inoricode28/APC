#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void main(){
	clrscr();
    //finalidad : procesar datos de un trabajador
    char apenom[50];
    int horas;
    float precio,sueldo,dscto,neto;
    //ingreso de datos
    cout<<"nombre : ";
    cin>> apenom;
    cout<<"numero de horas laboradas : ";
    cin>> horas;
    cout<<"precio de horas laboradas : ";
    cin>> precio;
    //realisar calculos
    sueldo = horas*precio;
    dscto = sueldo*1,00;
    neto = sueldo-dscto;

    cout<<"el sueldo basico es: "<<sueldo<<"\n";
    cout<<"el dscto de la ley es: "<<dscto<<"\n";
    cout<<"el neto a pagar es: "<<neto;

    getch(); 
}