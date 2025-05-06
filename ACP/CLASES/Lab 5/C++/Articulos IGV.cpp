#include <iostream.h>
void main ()
{
	float Precio, Subtotal,IGV, Importe;
	char NombreArticulo [30];
	int Cantidad;
	cout<<"Importe de una compra\n\n";
	cout<<"\t Nombre del articulo :";cin>>NombreArticulo;
	cout<<"\t Precio unitario :";cin>>Precio;
	cout<<"\t Cantidad de articulos :";cin>>Cantidad;
	Subtotal=Cantidad*Precio;
	IGV=Subtotal*0.19;
	Importe=Subtotal+IGV;
	cout<<"\n\n";
	cout<<"\n\t El subtotal es :"<<Subtotal;
	cout<<"\n\t I.G.V (0.19%) es :"<<IGV;
	cout<<"\n\t El importe a pagar  es :"<<Importe;
	cout<<"\n\n";
}
