#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

void main(){
	 clrscr();
	 //Finalidad: realizar descuentos y mostrar importes
     float pdscto1=0.30;
     float pdscto2=0.20;
     float pdscto3=0.15;
     float pdscto4=0.10;
     float pimpto =0.15;
     float c, dscto, impuesto, importe;
     //ingreso de datos
     cout<<"ingresar consumo:";
     cin>> c;
     //Evaluar condicion

	if(c >= 100){
          dscto=c*pdscto1;  
	}else{
       
		}if(c >= 60){
		       dscto=c*pdscto2;       
		}else{

			}if(c >= 30){
			       dscto=c*pdscto3;
			}else{
                   
			}
	 //Calcular impuesto               
     impuesto=(c-dscto)*pimpto;
     //calcular importe a pagar
     importe=c-dscto+impuesto;
     //salida de datos
     cout<<"consumo:"<<c<<"\n";
     cout<<"descuento:"<<dscto<<"\n";
     cout<<"impuesto:"<<impuesto<<"\n";
     cout<<"importe a pagar:"<<importe;

     getch();
} 		