#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>

const int ANCHO = 20;
const int ALTO = 20;

int xGusanito = ANCHO / 2;
int yGusanito = ALTO / 2;
int xComida = rand() % ANCHO;
int yComida = rand() % ALTO;
int direccion = 1; // 1 = derecha, 2 = abajo, 3 = izquierda, 4 = arriba
int juegoTerminado = 0; // Inicializa el juego como no terminado

void dibujarPantalla()
{
    clrscr();
    for (int i = 0; i < ALTO; i++)
    {
        for (int j = 0; j < ANCHO; j++)
        {
            if (i == yGusanito && j == xGusanito)
                cout << "G";
            else if (i == yComida && j == xComida)
                cout << "C";
            else
                cout << ".";
        }
        cout << endl;
    }
}

void moverGusanito()
{
    switch (direccion)
    {
        case 1: xGusanito++; break;
        case 2: yGusanito++; break;
        case 3: xGusanito--; break;
        case 4: yGusanito--; break;
    }
}

void verificarColisiones()
{
    if (xGusanito < 0 || xGusanito >= ANCHO || yGusanito < 0 || yGusanito >= ALTO)
        juegoTerminado = 1;
}

void verificarComida()
{
    if (xGusanito == xComida && yGusanito == yComida)
    {
        xComida = rand() % ANCHO;
        yComida = rand() % ALTO;
    }
}

void main()
{
    srand(time(NULL)); // Inicializa la semilla para números aleatorios
    while (!juegoTerminado)
    {
        dibujarPantalla();
        if (kbhit())
        {
            char tecla = getch();
            switch (tecla)
            {
                case 'a': direccion = 3; break;
                case 's': direccion = 2; break;
                case 'd': direccion = 1; break;
                case 'w': direccion = 4; break;
            }
        }
        moverGusanito();
        verificarColisiones();
        verificarComida();
        delay(50);
    }
    cout << "Juego terminado!" << endl;
}