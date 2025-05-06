#include <iostream.h>
#include <conio.h>
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

void main() {
    clrscr(); // Limpiar pantalla
    int dia;  // Declaración de variable para el día

    // Ingreso de datos
    cout << "Ingrese el numero del dia (1 para Domingo, 7 para Sabado): ";
    cin >> dia;  // Leer el número ingresado

    // Comprobación del valor ingresado y mostrar el día correspondiente
    switch(dia) {
        case 1:
            cout << "El dia es Domingo" << endl;
            break;
        case 2:
            cout << "El dia es Lunes" << endl;
            break;
        case 3:
            cout << "El dia es Martes" << endl;
            break;
        case 4:
            cout << "El dia es Miercoles" << endl;
            break;
        case 5:
            cout << "El dia es Jueves" << endl;
            break;
        case 6:
            cout << "El dia es Viernes" << endl;
            break;
        case 7:
            cout << "El dia es Sabado" << endl;
            break;
        default:
            cout << "El valor ingresado no es correcto" << endl;
            break;
    }

    getch();  // Pausa para que el programa no cierre inmediatamente
}  