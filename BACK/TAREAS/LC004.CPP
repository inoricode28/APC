#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "String.h"
#include "dos.h"

void main(){
	clrscr();
	//Finalidad: procesar datos de calificaciones de un estudiante
	char alumno[50] , curso[50];
	float practica , parcial , final , promedio;
    
    //Ingreso de datos
    cout<<"Identificacion del alumno: ";
    cin>> alumno;
    cout<<"Nombre del curso: ";
    cin>> curso;
    cout<<"promedio de practica: ";
    cin>> practica;
    cout<<"examen parcial: ";
    cin>> parcial;
    cout<<"examen final: ";
    cin>> final;
    //Ralizar calculos
    promedio = ((practica * 2)+(parcial*1)+(final*3))/6; 
    //Salida de datos
    cout<<"promedio final es:"<<promedio;

    getch();
}