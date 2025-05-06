#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h" 
#include "math.h" // Para usar las funciones sqrt() y pow()

void main(){
	//variable integer es entero 
	int radicante, resultado;
	clrscr();
	cout<<"ingrese el radicante: ";
	cin>>radicante;

	//calculo
	resultado = sqrt(radicante);;

	//Resultado
	cout<<"El resultado es: "<<resultado;

	getch();
}