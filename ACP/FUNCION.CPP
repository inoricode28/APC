#include "iostream.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

void verificarEdad(int edad) {
    if (edad < 18) {
        cout << "Eres menor de edad\n";
    } else {
        cout << "Eres mayor de edad\n";
    }
}

void main(){
    clrscr();
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    verificarEdad(edad);
    getch();
}