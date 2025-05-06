#include <iostream.h>
void main()
{
	int i,j,k,m;
	for(k=0;k<=1;k++)
	{
		m=k*6;
		for(i=1+m;i<=6+m;i++)
			cout<<"tabla del"<<i<<" ";
		cout<<"\n";
		for (j=1+m;j<=12;j++)
		{
			for(i=1+m;i<=6+m;i++)
			{
				cout.width(2);
				cout<<i<<"*";
				cout.width(2);
				cout<<j<<"=";
				cout.width(2);
				cout<<i*j;
				if(((i+m)%12)!=0) cout<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
}

