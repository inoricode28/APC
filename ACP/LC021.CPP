#include <iostream.h>
#include <conio.h>
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

void main(){
	 clrscr();
	 //Finalidad: Realizar operaciones matematicas
	 float v1, v2, R;
	 char opera[50];
     char letra_opera;
	 //ingreso de datos
	 cout<<"Primer valor:";
	 cin>> v1;
	 cout<<"Segundo valor:";
	 cin>> v2;
	 cout<<"Ingrese operador:"; 
	 cin>> opera;
     letra_opera = opera[0]; // Tomamos solo la primera letra o número

	 //verificando operador ingresado
	 switch (letra_opera) {
	    case '+':
             R=v1+v2; 
            break;
        case '-':
             R=v1-v2; 
            break;
        case '*':
             R=v1*v2;
            break;
        case '/':
             R=v1/v2;
            break;
            default:
            cout << "operador no valido" << endl;     
 }
            //Salida de datos
            cout<<"el resultado es :"<<R;
            getch(); // Pausa

}