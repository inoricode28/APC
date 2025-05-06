#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>

void main(){
	clrscr();
	textcolor(14);
	for(int b=0; b<= 9; b++){
	    gotoxy(1,b+1);
	    cprintf("*");
	    delay(4);
	    for(int n=0; n<= 4; n++){
	        cprintf("*");
	        delay(4);
	        for(int i=0; i<= 5; i++){
	            cprintf("*");
	            delay(4);
	        }
	    }
	}
	getch();
}