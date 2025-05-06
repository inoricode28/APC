#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
void main()
{
	clrscr();
	textcolor(10);
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cprintf("*");
		}
			printf("\n");
	}
	textcolor(14);
	gotoxy(9,1);  
	cprintf("*>> SHOKBALL");
	gotoxy(1,7); 
	cprintf("APRENDE BRAYAN");
	gotoxy(1,8); 
	cprintf("KAMISAMA");	
	getch();
	system("cls");
}