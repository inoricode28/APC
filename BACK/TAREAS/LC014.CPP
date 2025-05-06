#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

void main(){
     clrscr();
     //Finalidad: realizar descuentos y mostrar los importes
     float pdscto=0.20
     float pimpto=0.15
     float c, dscto, impuesto, importe;
     //Ingreso de datos
     cout<<"ingresar consumo:";
     cin>> c;
     //evaluar condicion
      if(c >30){
     	dscto=c*pdscto;
     }else{
        dscto=0;
     }
     //Calcular impuesto
     impuesto=(c-dscto)*pimpto;
     //calcular importe a pagar
     importe=c-dscto+impuesto;
     //salida de datos
     cout<<"consumo:"<<c<<"\n";
     cout<<"descuento:"<<dscto<<"\n";
     cout<<"impuesto:"<<impuesto<<"\n";
     cout<<"importe a pagar:"<<importe<<;

     getch();
} 