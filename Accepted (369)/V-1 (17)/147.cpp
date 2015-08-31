//Dollars (#147)
//Sadeq

#include<stdio.h>

long long nway[1000001];
int coin[11]={10000,5000,2000,1000,500,200,100,50,20,10,5};

int main()
{
	long i,j,n,v,c;
	float amnt;
	v=11;
	nway[0]=1;
	for(i=0;i<v;i++)
	{
		c=coin[i];
		for(j=c;j<=1000001;j++)
		{
			nway[j]=nway[j]+nway[j-c];
		}
	}
	while(1)
	{
		scanf("%f",&amnt);
		if(amnt==0.00) break;
		n=(long)(amnt*100+0.5);
		printf("%6.2f%17lld\n",amnt,nway[n]);
	}
	return 0;
}