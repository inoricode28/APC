#include <iostream.h>
void main()
{
	double Phora,Sbruto,MontoIES,Monto4ta,Sneto;
	char IES, cuarta;
	int Htrab;
	cout<<"\t\tcalcular sueldo \n";
	cout<<"\t\t=============== \n\n";
	cout<<"pago por hora \t:";cin>>Phora;
	cout<<"horas trabajadas:";cin>>Htrab;
	Sbruto = Phora * Htrab;
	cout<<"sueldo bruto\t:"<<Sbruto<<"\n";
	cout<<"descontar IES\t:";cin>>IES;
	cout<<"descontar 4ta \t:";cin>>cuarta;
	//calcular el IES
	MontoIES=0;
	if (IES =='s') MontoIES =0.02 * Sbruto;
	Monto4ta=0;
	if (cuarta == 's') Monto4ta = 0.1 * Sbruto;
	Sneto = Sbruto - MontoIES - Monto4ta;
	cout<<"MontoIES \t:"<<MontoIES<<"\n";
	cout<<"Monto4ta \t:"<<Monto4ta<<"\n";
	cout<<"total descuento \t:"<<MontoIES + Monto4ta<<"\n";
	cout<<"sueldo neto \t:"<<Sneto<<"\n";
}
