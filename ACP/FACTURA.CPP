#include <iostream.h>
#include <fstream.h>
#include <conio.h>

int main() {
    float tipo_cambio;
    float procesador, memoria, placa, disco, case_pc, teclado, mouse, monitor, parlantes, estabilizador;
    float total_dolares, total_local, igv, total_con_igv;
    const float IGV_RATE = 0.18; // 18% de IGV

    clrscr(); // Limpiar la pantalla

    // Entrada de datos
    cout << "Ingrese tipo de cambio de dolar: ";
    cin >> tipo_cambio;

    cout << "Procesador:\t";
    cin >> procesador;

    cout << "Memoria:\t";
    cin >> memoria;

    cout << "Placa:\t\t";
    cin >> placa;

    cout << "Disco:\t\t";
    cin >> disco;

    cout << "Case:\t\t";
    cin >> case_pc;

    cout << "Teclado:\t";
    cin >> teclado;

    cout << "Mouse:\t\t";
    cin >> mouse;

    cout << "Monitor:\t";
    cin >> monitor;

    cout << "Parlantes:\t";
    cin >> parlantes;

    cout << "Estabilizador:\t";
    cin >> estabilizador;

    // Calcular el total en dólares
    total_dolares = procesador + memoria + placa + disco + case_pc + teclado + mouse + monitor + parlantes + estabilizador;

    // Calcular el IGV y el total con IGV
    igv = total_dolares * IGV_RATE;
    total_con_igv = total_dolares + igv;

    // Calcular el total en moneda local
    total_local = total_con_igv * tipo_cambio;

    // Generar factura en archivo
    ofstream factura("Factura.txt");
    if (!factura) { // Verificar si el archivo se abrió correctamente
        cout << "Error al crear el archivo de factura.\n";
        return 1; // Salir del programa si no se pudo abrir el archivo
    }

    factura << "=================== FACTURA ===================\n";
    factura << "Tipo de cambio del dolar:\t\t" << tipo_cambio << "\n\n";
    factura << "Detalles de compra:\n";
    factura << "Procesador:\t\t\t\t\t\t$" << procesador << "\n";
    factura << "Memoria:\t\t\t\t\t\t$" << memoria << "\n";
    factura << "Placa:\t\t\t\t\t\t\t$" << placa << "\n";
    factura << "Disco:\t\t\t\t\t\t\t$" << disco << "\n";
    factura << "Case:\t\t\t\t\t\t\t$" << case_pc << "\n";
    factura << "Teclado:\t\t\t\t\t\t$" << teclado << "\n";
    factura << "Mouse:\t\t\t\t\t\t\t$" << mouse << "\n";
    factura << "Monitor:\t\t\t\t\t\t$" << monitor << "\n";
    factura << "Parlantes:\t\t\t\t\t\t$" << parlantes << "\n";
    factura << "Estabilizador:\t\t\t\t\t$" << estabilizador << "\n\n";

    factura << "Subtotal en dolares:\t\t\t$" << total_dolares << "\n";
    factura << "IGV (18%):\t\t\t\t\t\t$" << igv << "\n";
    factura << "Total en dolares con IGV:\t\t$" << total_con_igv << "\n";
    factura << "Total en soles:\t\t\t\t\t" << total_local << "\n";
    factura << "==============================================\n";
    
    factura.close();
    cout << "\nFactura generada en 'Factura.txt'.\n";

    getch(); // Esperar una tecla para finalizar
    return 0;
}
