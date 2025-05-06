#include "iostream.h"
#include "conio.h"
void main()
{int a,b,c;
float x,y,z,w,t;
a = 5; b = 8; x = 5; y = 8;
c = a / b; z = x / y;
w = a / b;
t = (a * 1.0) / b;
cout << "Resultados\n\n";
cout << "\tDivision entera\t:\t"<<c;
cout << "\n\tDivision real\t:\t"<<z;
cout << "\n\tDivision entera\t:\t"<<w;
cout << "\n\tDivision real\t:\t"<<t<<"\n";
getch();
}