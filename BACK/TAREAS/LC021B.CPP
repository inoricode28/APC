#include <iostream.h>
#include <conio.h>
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "dos.h"

void main(){
    clrscr();
    // Finalidad: Realizar operaciones matemáticas
    float v1, v2, R;
    char opera[50];
    char letra_opera;

    // Ingreso de datos
    cout << "Primer valor: ";
    cin >> v1;
    cout << "Segundo valor: ";
    cin >> v2;
    cout << "Ingrese operador (+, -, *, /): "; 
    cin >> opera;
    
    letra_opera = opera[0]; // Tomamos solo la primera letra o símbolo

    // Verificando operador ingresado
    switch (letra_opera) {
        case '+':
            R = v1 + v2;
            break;
        case '-':
            R = v1 - v2;
            break;
        case '*':
            R = v1 * v2;
            break;
        case '/':
            if (v2 != 0) {
                R = v1 / v2;
            } else {
                cout << "Error: División por cero no permitida" << endl;
                getch();
                return; // Salimos para evitar realizar más cálculos
            }
            break;
        default:
            cout << "Operador no válido" << endl;
            getch(); // Pausa
            return; // Salimos si el operador no es válido
    }

    // Salida de datos
    cout << "El resultado es: " << R << endl;

    getch(); // Pausa
}