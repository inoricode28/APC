#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

void main(){
	 clrscr();
	 //Finalidad: obtener hora, minuto y segundos
	 float h, m, s;
	 //Ingreso de datos
	 cout<<"ingresar cantidad de segundos:";
	 cin>> s;
	 //Inicializar valor
	 h=0;
	 m=0;
	 //Evaluar condicion
	 if(s >=60){
           m=(s/60);
           s =(s%60);
     }
     if(m >= 60){
            h=(m/60);
            m=(m%60);
     }
     //salida de datos
     cout<<"horas:"<<h<<"\n";
     cout<<"minutos:"<<m<<"\n";
     cout<<"segundos:"<<s;

     getch();
}