#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

//Funcion   
void verificarEdad(int P_edad){//Parametro      

    if(P_edad < 18){
        cout<<"Eres menor de edad\n";
    }else{
    	cout<<"Eres mayor de edad\n";
    }
}


//Principal
void main(){
    clrcsr();
    //Variable local
    int edad;
    cout<<"Ingresa su edad: "
    cin>>edad;

    //Invocar de Funcion
    verificarEdad(edad);

    getch();
}