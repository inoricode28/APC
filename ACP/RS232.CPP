/*
 PC to PC Communication via RS232 port.
 Chat with only 3-wire connection.
 
 Adaptado para Borland C++ 3.0
*/

#include <conio.h>    // Para manejo de pantalla
#include <bios.h>     // Para la función bioscom
#include <stdio.h>
#include <dos.h>

#define COM1       0
#define DATA_READY 0x100
#define SETTINGS ( 0xe0 | 0x02 | 0x00 | 0x00) // Baud 1200, 7 bits, no paridad, 1 bit de parada

// Prototipo de la función bioscom
int bioscom(int cmd, int aux, int port);

void chatwindow();
int chatting();
void dsply(char *, int);
void welcome();

void main() {
    textbackground(0);
    welcome();
    chatwindow();
    chatting();
}

void chatwindow() {
    int i, j;
    textbackground(0);
    clrscr();
    cprintf("      Esc:  Exit      Enter: Send          :Recieved msg       :Sent msg");
    gotoxy(63,1);  textcolor(14);  putch(219);
    gotoxy(43,1);  textcolor(10);  putch(219);
    window(10,3,70,20);
    textbackground(1);
    clrscr();
    textcolor(3);
    window(1,1,80,25);

    for(i=0; i<=60; i++) {
        gotoxy(10+i,3);     putch(205);
        gotoxy(10+i,20);    putch(205);
    }
    for(j=0; j<=16; j++) {
        gotoxy(10,3+j);     putch(186);
        gotoxy(70,3+j);     putch(186);
    }
    gotoxy(10,3); putch(201);
    gotoxy(70,3); putch(187);
    gotoxy(10,20); putch(200);
    gotoxy(70,20); putch(188);

    textbackground(3);
    textcolor(1);
    window(1,22,80,24);
    clrscr();
    window(1,1,80,25);

    for(i=1; i<=80; i++) {
        gotoxy(i,22); putch('-');
        gotoxy(i,24); putch('-');
    }
    gotoxy(2,23); putch(16);
}

int chatting() {
    char msg[80], msg_in[80];
    int status, out, in, count=0, count_in=0, i;

    bioscom(0, SETTINGS, COM1);
    window(3,23,80,23);
    
    while (1) {
        status = bioscom(3, 0, COM1);
        if (status & DATA_READY) {
            if ((out = bioscom(2, 0, COM1) & 0x7F) != 0)
                msg_in[count_in++] = out;
            if (out == 13) {
                dsply(msg_in,10);
                count_in = 0;
                gotoxy(count+1,1);
            }
        }

        if (kbhit()) {
            gotoxy(count+1,1);
            if ((in = getche()) == 27) break;
            if (in == 0) {
                getch();
                continue;
            }
            if (in == 8 && count > 0) { count -= 2; cprintf(" \b"); }
            else msg[count] = in;
            if (count == 70) { in = 13; msg[70] = 13; }
            count++;

            if (in == 13) {
                dsply(msg,14);
                for(i=0; i<count; i++) {
                    bioscom(1, msg[i], COM1);
                }
                clrscr();
                count = 0;
            }
        }
    }
    return 1;
}

void dsply(char str[80], int col) {
    int i = 0;
    static int line = 1;
    window(11,4,69,19);
    textbackground(1);
    textcolor(col);
    gotoxy(1,line);
    putch('\n');
    putch(175);
    while(str[i] != 13) {
        putch(str[i]);
        i++;
    }
    line = wherey();
    window(3,23,80,23);
    textbackground(3);
    textcolor(1);
}

void welcome() {
    int i, j;
    clrscr();
    textcolor(4);
    gotoxy(25,5); cprintf("Welcome to PC to PC chat");
    gotoxy(22,6); cprintf("Program for RS232 communication");
    textcolor(2);
    gotoxy(21,7); cprintf("Adaptado para Borland C++ 3.0");
    sleep(1);
    window(10,9,70,23);
    textbackground(1);
    clrscr();
    textcolor(3);
    window(1,1,80,25);

    for(i=0; i<=60; i++) {
        gotoxy(10+i,3); putch(205);
        gotoxy(10+i,23); putch(205);
    }
    for(j=0; j<=20; j++) {
        gotoxy(10,3+j); putch(186);
        gotoxy(70,3+j); putch(186);
    }
    gotoxy(10,3); putch(201);
    gotoxy(70,3); putch(187);
    gotoxy(10,23); putch(200);
    gotoxy(70,23); putch(188);
    sleep(1);
    gotoxy(15,10);
    window(12,11,68,22);
    cprintf("Conecta COM1 de ambos equipos con 3 cables.\nPresiona una tecla para empezar...");
    window(1,1,80,25);
    getch();
}
