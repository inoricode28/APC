#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h" 
#include "math.h" // Para usar las funciones sqrt() y pow()

void main(){
	//variable integer es entero 
	int base, exponente, resultado;
	clrscr();
	cout<<"ingrese la base: ";
	cin>>base;

	cout<<"ingrese la exponente: ";
	cin>>exponente;

	//calculo
	resultado = pow(base, exponente);

	//Resultado
	cout<<"El resultado es: "<<resultado;

	getch();
}