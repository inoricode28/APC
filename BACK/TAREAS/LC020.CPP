#include <iostream.h>
#include <conio.h>
#include <string.h> // para usar strcmp

void main(){
    clrscr();
    // Finalidad: obtener los importes y el descuento
    float pdscto1 = 0.10;
    float pdscto2 = 0.15;
    float pdscto3 = 0.20;
    float pdscto4 = 0.25;
    float pdscto5 = 0.30;

    char mar[50]; // para almacenar la marca
    int cant;
    float prec, pbruto, dscto = 0, importe;
    char letra_marca;

    // Ingreso de datos
    cout << "Ingresar Marca (3, M, D, T, F): ";
    cin >> mar;
    
    letra_marca = mar[0]; // Tomamos solo la primera letra o número

    cout << "Ingresar Cantidad: ";
    cin >> cant;
    cout << "Ingresar Precio: ";
    cin >> prec;

    // Realizar cálculos
    pbruto = cant * prec;

    // Comprobación del valor ingresado con switch y case
    switch(letra_marca) {
        case '3':
            dscto = pbruto * pdscto1;
            break;
        case 'M':
        case 'm':  // Aceptamos también la minúscula
            dscto = pbruto * pdscto2;
            break;
        case 'D':
        case 'd':  // Aceptamos también la minúscula
            dscto = pbruto * pdscto3;
            break;
        case 'T':
        case 't':  // Aceptamos también la minúscula
            dscto = pbruto * pdscto4;
            break;
        case 'F':
        case 'f':  // Aceptamos también la minúscula
            dscto = pbruto * pdscto5;
            break;
        default:
            cout << "El valor ingresado no es correcto" << endl;
            getch(); // Pausa
            return;  // Salir si la marca no es válida
    }

    // Calcular el importe a pagar
    importe = pbruto - dscto;

    // Salida de datos
    cout << "Importe Bruto: " << pbruto << "\n";
    cout << "Descuento: " << dscto << "\n";
    cout << "Importe a pagar: " << importe << "\n";

    getch(); // Pausa para ver los resultados
}
