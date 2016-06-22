//Cheapest Base (#11005)
//Sadeq

#include<stdio.h>

long output(long dec,long b);

long val[40];
long cost[40];

int main()
{
	//freopen("in.txt","r",stdin);
	long cas,c;
	long i,j,query;
	long dec;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		for(i=0;i<36;i++)
		{
			scanf("%ld",&val[i]);
		}

		scanf("%ld",&query);

		if(c>1) printf("\n");
		printf("Case %ld:\n",c);

		for(i=1;i<=query;i++)
		{
			//execute every query
			scanf("%ld",&dec);
			printf("Cheapest base(s) for number %ld:",dec);

			//find all cost
			for(j=2;j<=36;j++)
			{
				cost[j]=output(dec,j);
			}

			//find minimum cost
			long min=20000000;
			for(j=2;j<=36;j++)
			{
				if(cost[j]<min) min=cost[j];
			}

			//print all cost
			for(j=2;j<=36;j++)
			{
				if(cost[j]==min) printf(" %ld",j);
			}
			printf("\n");
		}
	}

	return 0;
}

long output(long dec,long b)
{
	long valn=0,n;
	while(1)
	{
		n=dec%b;
		valn=valn+val[n];
		dec=dec/b;
		if(dec==0) break;
	}
	return valn;
}
