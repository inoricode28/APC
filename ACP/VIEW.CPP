#include <conio.h>
#include <string.h>
#include <stdio.h>

void mostrarMenu() {
    int xcol, xfil;
    textbackground(0);  // Fondo Negro
    clrscr();

    // Cuadro superior con título
    gotoxy(1, 1); cprintf("%c", 201);  // Esquina superior izquierda
    for (xcol = 2; xcol <= 79; xcol++) {
        gotoxy(xcol, 1); cprintf("%c", 205);  // Línea horizontal superior
    }
    gotoxy(80, 1); cprintf("%c", 187);  // Esquina superior derecha

    gotoxy(1, 2); cprintf("%c", 186);  // Borde izquierdo
    char vtitulo[] = "SHREE RAAM MOBILE SHOP";
    int vlongitud = strlen(vtitulo);
    gotoxy((80 - vlongitud) / 2, 2); cprintf("%s", vtitulo);
    gotoxy(80, 2); cprintf("%c", 186);  // Borde derecho

    gotoxy(1, 3); cprintf("%c", 200);  // Esquina inferior izquierda
    for (xcol = 2; xcol <= 79; xcol++) {
        gotoxy(xcol, 3); cprintf("%c", 205);  // Línea horizontal inferior
    }
    gotoxy(80, 3); cprintf("%c", 188);  // Esquina inferior derecha

    // Fecha y hora simuladas en la esquina superior derecha
    gotoxy(60, 2); cprintf("04 May 2019  08:44:51");

    // Cuadro "HOME" en el lado izquierdo
    textcolor(14);  // Amarillo para el texto "HOME"
    gotoxy(5, 5); cprintf("%c", 218);  // Esquina superior izquierda de HOME
    for (xcol = 6; xcol <= 14; xcol++) {
        gotoxy(xcol, 5); cprintf("%c", 196);  // Línea horizontal superior de HOME
    }
    gotoxy(15, 5); cprintf("%c", 191);  // Esquina superior derecha de HOME
    for (xfil = 6; xfil <= 7; xfil++) {
        gotoxy(5, xfil); cprintf("%c", 179);  // Borde izquierdo de HOME
        gotoxy(15, xfil); cprintf("%c", 179);  // Borde derecho de HOME
    }
    gotoxy(5, 8); cprintf("%c", 192);  // Esquina inferior izquierda de HOME
    for (xcol = 6; xcol <= 14; xcol++) {
        gotoxy(xcol, 8); cprintf("%c", 196);  // Línea horizontal inferior de HOME
    }
    gotoxy(15, 8); cprintf("%c", 217);  // Esquina inferior derecha de HOME
    gotoxy(8, 6); cprintf("HOME");

    // Opciones del menú en el centro
    textcolor(11);  // Color diferente para cada opción del menú
    gotoxy(35, 10); cprintf("Enter New");
    textcolor(13);
    gotoxy(35, 12); cprintf("View Data");
    textcolor(9);
    gotoxy(35, 14); cprintf("Settings");
    textcolor(5);
    gotoxy(35, 16); cprintf("About");
    textcolor(12);
    gotoxy(35, 18); cprintf("Quit");

    // Barra de estado en la parte inferior
    textcolor(7);  // Blanco
    gotoxy(5, 20); cprintf("STATUS:");
    textcolor(4);  // Rojo para el mensaje de estado
    gotoxy(13, 20); cprintf("Error! Press E, V, S, A or Q.");
}

void main() {
    mostrarMenu();
    getch();
}
