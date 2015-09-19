//Ecological Premium (#10300)
//Sadeq

#include<stdio.h>

int main()
{
	int cas,fir,i,j;
	long int area,ani,fri,cost;
	scanf("%d",&cas);
	for(i=1;i<=cas;i++)
	{
		scanf("%d",&fir);
		{
			cost=0;
			for(j=1;j<=fir;j++)
			{
				scanf("%ld %ld %ld",&area,&ani,&fri);
				cost=cost+area*fri;
			}
		}
		printf("%ld\n",cost);
	}
	return 0;
}