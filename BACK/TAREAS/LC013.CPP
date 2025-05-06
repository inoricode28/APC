#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void main(){
	 clrscr();
	 //Finalidad: verificar el valor ingresado si es positivo o negativo
     int num;
     //Ingreso de datos
     cout<<"ingrese valor numerico:";
     cin>> num;
     //evaluar condicion
     if(num > 0){
     	cout<<"numero ingresado es positivo";         
     }else{
     	cout<<"numero ingresado es negativo";
     }   
     
     

     getch();
}