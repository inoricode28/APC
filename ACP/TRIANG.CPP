#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <string.h>
#include <dos.h>

void main(){                  
	int x, fil, col;
	clrscr();
	x=40;
	fil=2;
	textcolor(14);
	while(fil<=22)
	{
		col=40;
		while(col<=x)
		{
			 gotoxy(col,fil);cprintf("*");delay(40);
			 col++;
		}
		fil++;
		x++;
	}
	x=40;
	fil=2;
	while(fil<=22)
	{
	   col=40;
	   while(col>=x)
	   {
			 gotoxy(col,fil);cprintf("*");delay(40);
			 col--;
	   }
	   fil++;
	   x--;
	}
	getch();
}