#include <iostream.h>
void main ()
{
	float Precio, Importe;
	char NombreArticulo [30];
	int Cantidad;
	cout<<"Importe de una compra\n\n";
	cout<<"\t Nombre del articulo :";cin>>NombreArticulo;
	cout<<"\t Precio unitario :";cin>>Precio;
	cout<<"\t Cantidad de articulos :";cin>>Cantidad;
	Importe=Cantidad*Precio;
	cout<<"\n\n\n\t\t";
	cout<<"\n\t El importe a pagar  es :"<<Importe;
	cout<<"\n\n\t";
}
