//Above Average (#10370)
//Sadeq

#include<iostream.h>
#include<stdio.h>

int main()
{
	float sum,num[1000],average,ntemp,jtemp;
	int n,i,j,tc,t;
	cin>>tc;
	for(t=0;t<tc;t++)
	{
		cin>>n;
		ntemp=(float)n;
		sum=0;
		for(i=0;i<n;i++)
		{
			cin>>num[i];
			sum=sum+num[i];
		}
		average=sum/ntemp;
		j=0;
		for(i=0;i<n;i++)
		{
			if(num[i]>average) j++;
		}
		jtemp=(float)j;
		printf("%.3f%c\n",(jtemp*100)/ntemp,'%');
	}
	return 0;
}
