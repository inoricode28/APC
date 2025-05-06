#include <iostream.h>
void main()
{
	int i, j;
	for(i=1;i<=6;i++)
		cout<<"tabla del"<<i<<" ";
	cout<<"\n";
	for(i=1;i<=6;i++)
		cout<<"=============";
	cout<<"\n";
	for(j=1;j<=12;j++)
	{
		for(i=1;i<=6;i++)
		{
			cout.width(2); cout<<i<<"*";
			cout.width(2); cout<<j<<"=";
			cout.width(2); cout<<i*j<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	for(i=7;i<=12;i++)
		cout<<"tabla del"<<i<<" ";
	cout<<"\n";
	for(i=7;i<=12;i++)
		cout<<"=============";
	cout<<"\n";
	for(j=1;j<=12;j++)
	{
		for(i=7;i<=12;i++)
		{
			cout.width(2); cout<<i<<"*";
			cout.width(2); cout<<j<<"=";
			cout.width(2); cout<<i*j;
			if((i%6)!=0) cout<<" ";
		}
		cout<<"\n";
	}
}


