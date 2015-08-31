//Move the bishop (#10849)
//Sadeq
//6 aug 2009

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//freopen("in.txt","r",stdin);
	long cas,c;
	long ccas,cc,N;
	long x1,x2,y1,y2;

	scanf("%lld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%lld",&ccas);
		scanf("%lld",&N);

		for(cc=1;cc<=ccas;cc++)
		{
			scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);

			//processing and output
			if(x1>N || y1>N || x2>N || y2>N)
			{
				printf("no move\n");
			}
			else if(x1==x2 && y1==y2)
			{
				printf("0\n");
			}
			else if(abs(x1-x2)==abs(y1-y2))
			{
				printf("1\n");
			}
			else if(x1+y1==x2+y2)
			{
				printf("1\n");
			}
			else if(((x1%2==1 && y1%2==0) || (x1%2==0 && y1%2==1)) && ((x2%2==1 && y2%2==0) || (x2%2==0 && y2%2==1)))
			{
				printf("2\n");
			}
			else if(((x1%2==1 && y1%2==1) || (x1%2==0 && y1%2==0)) && ((x2%2==1 && y2%2==1) || (x2%2==0 && y2%2==0)))
			{
				printf("2\n");
			}
			else
			{
				printf("no move\n");
			}
		}
	}

	return 0;
}
