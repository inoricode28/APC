#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"


//Funcion
saludo(){
    
    clrscr();
    cout<<"Hola Brayan";
    getch();
}

suma(){
	float jr1,jr2,resultado;
	clrscr();
	//Entrada de datos
	cout<<"ingrese primer numero:";
	cin>> jr1;
	cout<<"ingrese segundo numero:";
	cin>> jr2;
	//Operacion
    resultado=jr1+jr2;
    //Salida de datos
    cout<<"el resultado de la suma es:"<<resultado;

    getch();
}

shokball(){
	clrscr();
	textcolor(14);
	for(int b=0; b<=9; b++){
	    gotoxy(1,b+1);
        cprintf("*");
        delay(4);
        for(int i=0; i<=8; i++){
            cprintf("*");
            delay(7);
            for(int g=0; g<=4; g++){
                cprintf("*");
                delay(1);
                for(int k=0; k<=4; k++){
                	cprintf("*");
                    delay(6);
                }
            }
        }
	}
}


void main(){
   
   saludo(); //Invocador
     suma();
     shokball();
     
}