#include <conio.h>
#include <stdlib.h>

void main() {
    clrscr();
    int x = 40, y = 12; // Posición inicial del asterisco
    char ch;

    textcolor(10);
    gotoxy(x, y);
    cprintf("*");

    while (1) {
        ch = getch();
        
        // Borrar el asterisco actual
        gotoxy(x, y);
        cprintf(" ");
        
        // Cambiar la posición según la tecla presionada
        if (ch == 0) {
            ch = getch(); // Leer el código de tecla extendido
            if (ch == 72) y--;       // Flecha arriba
            if (ch == 80) y++;       // Flecha abajo
            if (ch == 75) x--;       // Flecha izquierda
            if (ch == 77) x++;       // Flecha derecha
        }
        
        // Mantener el asterisco dentro de los límites de la pantalla
        if (x < 1) x = 1;
        if (x > 80) x = 80;
        if (y < 1) y = 25;
        if (y > 25) y = 25;

        // Dibujar el asterisco en la nueva posición
        gotoxy(x, y);
        cprintf("*");
    }
}