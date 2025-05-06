#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include<dos.h>
void main(){
    clrscr();
    textcolor(14);
    for(int i=0; i<=10; i++){
                
        for(int j=0; j<i; j++){
            cprintf("%d",j+1);delay(50);
        }
	//printf("\n");
        cout<<endl;
    }
    
    getch();
}