//Ingenuous Cubrency (#11137)
//Sadeq

#include<stdio.h>

long long nway[10001];

int main()
{
	long long i,j,n,v,c;
	long long coin[21];
	v=21;

	j=0;
	for(i=21;i>=1;i--)
	{
		coin[j]=i*i*i;
		j++;
	}

	nway[0]=1;
	for(i=0;i<v;i++)
	{
		c=coin[i];
		for(j=c;j<=10001;j++)
		{
			nway[j]=nway[j]+nway[j-c];
		}
	}

	while(scanf("%lld",&n)==1)
	{
		printf("%lld\n",nway[n]);
	}
	return 0;
}
