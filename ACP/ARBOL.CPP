#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

void main() {
    clrscr();
    textcolor(10);

    int height = 10; // Altura del árbol

    // Parte superior del árbol
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i; j++) {
            cprintf(" ");
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            cprintf("*");
        }
        cprintf("\n");
    }

    //Tronco del árbol
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < height - 1; j++) {
            cprintf(" ");
        }
        cprintf("***\n");
    }

    textcolor(14);
    cprintf("\nFeliz Navidad!");

    getch();
    system("cls");
    
}