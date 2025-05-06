#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

void main(){
	clrscr();
	//Finalidad:procesar datos de calificacion de un estudiante
	char alumno,curso[50]; 
	float practica,parcial,final,promedio;
	//Ingreso de datos
	cout<<"identificacion del alumno:";
	cin>> alumno;
	cout<<"nombre del curso:";
	cin>> curso;
	cout<<"promedio de practicas:";
	cin>>practica;
	cout<<"examen parcial:";
	cin>> parcial;
	cout<<"examen final:";
	cin>> final;
	//Realizar calculos
	promedio=((practica*2)+(parcial*1)+(final*3))/6;
	//Salida de datos
	cout<<"promedio final es:"<<promedio;

getch();	
}