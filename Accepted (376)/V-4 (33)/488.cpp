//Triangle Wave (#488)
//Sadeq

#include<iostream.h>

int main()
{
	long int i,j,amp,fre,a,t,k;
	cin>>t;
	for(k=1;k<=t;k++)
	{
		cin>>amp>>fre;
		for(a=0;a<fre;a++)
		{
			for(i=1;i<=amp;i++)
			{
				for(j=1;j<=i;j++)
				{
					cout<<i;
				}
				cout<<endl;
			}
			for(i=amp-1;i>=1;i--)
			{
				for(j=i;j>=1;j--)
				{
					cout<<i;
				}
				cout<<endl;
			}
			if(a<fre-1) cout<<endl;
		}
		if(k<t) cout<<endl;
	}
	return 0;
}