#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

void main(){
     clrscr();
     //Finalidad: obtener el valor mayor
     float a,b,c,d,mayor;
     //Ingreso de datos
     cout<<"ingresar primer valor:";
     cin>> a;
     cout<<"ingresar segundo valor:";
     cin>> b;
     cout<<"ingresar tercer valor:";
     cin>> c;
     cout<<"ingresar cuarto valor:";
     cin>> d;
     //Inicializar valor
     mayor=a;
     //Evaluar condicion

     if(b >= mayor){
           mayor=b;
     }else{
       
     }if(c >= mayor){
            mayor=c;
     }else{

     }if(d >= mayor){
            mayor=d;
     }           
     //Salida de datos
     cout<<"el mayor es"<<mayor;

     getch();
}