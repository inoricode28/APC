#include <graphics.h>
#include <conio.h>
#include <dos.h>

#define PORT 0x3F8 // Dirección base del puerto COM1

// Inicializa el puerto serie
void serial_init() {
    outportb(PORT + 1, 0x00); // Deshabilitar interrupciones
    outportb(PORT + 3, 0x80); // Habilitar DLAB
    outportb(PORT + 0, 0x0C); // Velocidad de 9600 baudios (byte bajo)
    outportb(PORT + 1, 0x00); // Velocidad de 9600 baudios (byte alto)
    outportb(PORT + 3, 0x03); // 8 bits, sin paridad, 1 bit de parada
    outportb(PORT + 2, 0xC7); // Habilitar FIFO
    outportb(PORT + 4, 0x0B); // Habilitar DTR, RTS y OUT2
}

// Envía un carácter por el puerto serie
void serial_send(char c) {
    while (!(inportb(PORT + 5) & 0x20)); // Esperar hasta que el buffer esté vacío
    outportb(PORT, c); // Enviar el carácter
}

void draw_light(int x, int y, bool isOn) {
    setcolor(WHITE);
    circle(x, y, 30);
    if (isOn) {
        setfillstyle(SOLID_FILL, 14); // Amarillo (Borland C++ usa 14 para YELLOW)
        floodfill(x, y, WHITE);
    } else {
        setfillstyle(SOLID_FILL, LIGHTGRAY); // Gris claro en lugar de DARKGRAY
        floodfill(x, y, WHITE);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    serial_init(); // Inicializar el puerto serie
    
    bool lights[4] = {false, false, false, false};
    char command;
    
    while (1) {
        cleardevice();
        draw_light(100, 150, lights[0]);
        draw_light(200, 150, lights[1]);
        draw_light(300, 150, lights[2]);
        draw_light(400, 150, lights[3]);
        
        if (kbhit()) {
            command = getch();
            switch (command) {
                case 'a': serial_send('a'); lights[0] = !lights[0]; break;
                case 's': serial_send('s'); lights[1] = !lights[1]; break;
                case 'd': serial_send('d'); lights[2] = !lights[2]; break;
                case 'f': serial_send('f'); lights[3] = !lights[3]; break;
                case 'q': closegraph(); return 0;
            }
        }
        delay(100);
    }
}
