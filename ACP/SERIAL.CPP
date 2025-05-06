#include <conio.h>  // Para outportb(), inportb()
#include <dos.h>    // Para interrupciones y delay()
#include <stdio.h>  // Para printf()

#define PORT 0x3F8 // Dirección base del puerto COM1

// Inicializa el puerto serie
void serial_init() {
    outportb(PORT + 1, 0x00); // Deshabilitar interrupciones
    outportb(PORT + 3, 0x80); // Habilitar DLAB (Divisor Latch Access Bit)
    outportb(PORT + 0, 0x0C); // Establecer velocidad de 9600 baudios (byte bajo)
    outportb(PORT + 1, 0x00); // Establecer velocidad de 9600 baudios (byte alto)
    outportb(PORT + 3, 0x03); // 8 bits, sin paridad, 1 bit de parada
    outportb(PORT + 2, 0xC7); // Habilitar FIFO
    outportb(PORT + 4, 0x0B); // Habilitar DTR, RTS y OUT2
}

// Envía un carácter por el puerto serie
void serial_send(char c) {
    while (!(inportb(PORT + 5) & 0x20)); // Esperar a que el buffer de transmisión esté vacío
    outportb(PORT, c); // Enviar el carácter
}

// Muestra el menú en pantalla
void mostrar_menu() {
    clrscr();
    printf("===== MENU DE CONTROL DE LEDS =====\n");
    printf("1. LED 1 (Pin 8)  -> Enviar 'a'\n");
    printf("2. LED 2 (Pin 9)  -> Enviar 's'\n");
    printf("3. LED 3 (Pin 10) -> Enviar 'd'\n");
    printf("4. LED 4 (Pin 11) -> Enviar 'f'\n");
    printf("5. LED 5 (Pin 12) -> Enviar 'g'\n");
    printf("6. LED 6 (Pin 13) -> Enviar 'h'\n");
    printf("7. Apagar TODOS los LEDs -> Enviar 'x'\n");
    printf("8. Salir\n");
    printf("Seleccione una opcion: ");
}

// Programa principal
int main() {
    serial_init(); // Inicializar el puerto serial
    char opcion;

    do {
        mostrar_menu();
        opcion = getch(); // Esperar la entrada del usuario sin mostrar la tecla presionada

        switch (opcion) {
            case '1':
                serial_send('a');
                printf("\nLED 1 (Pin 8) cambiado de estado.\n");
                break;
            case '2':
                serial_send('s');
                printf("\nLED 2 (Pin 9) cambiado de estado.\n");
                break;
            case '3':
                serial_send('d');
                printf("\nLED 3 (Pin 10) cambiado de estado.\n");
                break;
            case '4':
                serial_send('f');
                printf("\nLED 4 (Pin 11) cambiado de estado.\n");
                break;
            case '5':
                serial_send('g');
                printf("\nLED 5 (Pin 12) cambiado de estado.\n");
                break;
            case '6':
                serial_send('h');
                printf("\nLED 6 (Pin 13) cambiado de estado.\n");
                break;
            case '7':
                serial_send('x');
                printf("\nTodos los LEDs apagados.\n");
                break;
            case '8':
                printf("\nSaliendo del programa...\n");
                break;
            default:
                printf("\nOpción no válida, intenta de nuevo.\n");
        }

        delay(300); // Esperar 0.3 segundos antes de mostrar el menú nuevamente

    } while (opcion != '8');

    return 0;
}
