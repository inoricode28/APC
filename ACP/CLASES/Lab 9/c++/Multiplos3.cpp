#include <iostream.h>
void main()
{
	int i,a,b,aux;
	cout << "Ingrese el primer numero :"; cin >> a;
	cout << "Ingrese el segundo numero :"; cin >> b;
	if (a>b)
	{
		aux=a;

		a=b;

		b=aux;
	}
	for (i=a; i<=b; i++)
		if ((i%3) == 0)
			cout << i << "\t";
}


