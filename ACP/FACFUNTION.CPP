#include <iostream.h>
#include <fstream.h>
#include <iomanip.h> // Incluir la biblioteca iomanip.h
#include <conio.h>

// Función para ingresar los datos
void ingresarDatos(float &tipo_cambio, float &igv_rate, float componentes[], int num_componentes) {
    cout << "Ingrese tipo de cambio de dolar: ";
    cin >> tipo_cambio;

    cout << "Ingrese el porcentaje de IGV (por ejemplo, 0.18 para 18%): ";
    cin >> igv_rate;

    const char* nombres_componentes[] = {"Procesador", "Memoria", "Placa", "Disco", "Case", 
                                         "Teclado", "Mouse", "Monitor", "Parlantes", "Estabilizador"};

    for (int i = 0; i < num_componentes; ++i) {
    cout << setw(13) << nombres_componentes[i] << ": \t";
    cin >> componentes[i];
}
}

// Función para calcular el total en dólares
float calcularTotalDolares(const float componentes[], int num_componentes) {
    float total = 0.0;
    for (int i = 0; i < num_componentes; ++i) {
        total += componentes[i];
    }
    return total;
}

// Función para calcular el IGV
float calcularIGV(float total_dolares, float igv_rate) {
    return total_dolares * igv_rate;
}

// Función para calcular el total con IGV
float calcularTotalConIGV(float total_dolares, float igv_rate) {
    return total_dolares + calcularIGV(total_dolares, igv_rate);
}

// Función para calcular el total en moneda local
float calcularTotalLocal(float total_con_igv, float tipo_cambio) {
    return total_con_igv * tipo_cambio;
}

// Función para generar la factura
void generarFactura(float tipo_cambio, float igv_rate, const float componentes[], int num_componentes, 
                    float total_dolares, float igv, float total_con_igv, float total_local) {
    const char* nombres_componentes[] = {"Procesador", "Memoria", "Placa", "Disco", "Case", 
                                         "Teclado", "Mouse", "Monitor", "Parlantes", "Estabilizador"};

    ofstream factura("Factura.txt");
    if (!factura) { // Verificar si el archivo se abrió correctamente
        cout << "Error al crear el archivo de factura.\n";
        return;
    }

    factura << setprecision(3); // <-- Limitar decimales a 3 en todas las salidas del archivo
    factura << "=================== FACTURA ========================\n";
    factura << "Tipo de cambio del dolar:" << setw(20) << tipo_cambio << "\n";
    factura << "IGV ingresado:" << setw(30) << igv_rate * 100 << "%\n\n";
    factura << "\tDetalles de compra:\n";
    
    for (int i = 0; i < num_componentes; ++i) {
        factura << setw(20) << nombres_componentes[i] << ": " << setw(21) <<"$"<<componentes[i] << "\n";
    }

    factura << "\nSubtotal en dolares:" << setw(23) << "$"<< total_dolares << "\n";
    factura << "IGV (" << igv_rate * 100 << "%):" << setw(33) << "$"<< igv << "\n";
    factura << "Total en dolares con IGV:" << setw(18) << "$" << total_con_igv << "\n";
    factura << "Total en soles:" << setw(28) << "S/"<< total_local << "\n";
    factura << "====================================================\n";

    factura.close();
    cout << "\nFactura generada en 'Factura.txt'.\n";
}

void main() {
    float tipo_cambio;
    float igv_rate;
    const int num_componentes = 10;
    float componentes[num_componentes]; // Array para almacenar los precios de los componentes

    clrscr(); // Limpiar la pantalla

    // Llamada a la función para ingresar datos
    ingresarDatos(tipo_cambio, igv_rate, componentes, num_componentes);

    // Calcular el total en dólares, IGV y total con IGV
    float total_dolares = calcularTotalDolares(componentes, num_componentes);
    float igv = calcularIGV(total_dolares, igv_rate);
    float total_con_igv = calcularTotalConIGV(total_dolares, igv_rate);
    float total_local = calcularTotalLocal(total_con_igv, tipo_cambio);

    // Generar factura en archivo
    generarFactura(tipo_cambio, igv_rate, componentes, num_componentes, total_dolares, igv, total_con_igv, total_local);

    getch(); // Esperar una tecla para finalizar
    
}