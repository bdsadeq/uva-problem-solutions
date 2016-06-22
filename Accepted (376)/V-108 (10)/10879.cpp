//Code refactoring (#10879)
//Sadeq

#include<stdio.h>

int main()
{
	long in,i,j;
	int cas,c;
	scanf("%d",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld",&in);

		//output
		printf("Case #%d: %ld = ",c,in);
		for(i=2;i<=in;i++)
		{
			if(in%i==0)
			{
				printf("%ld * %ld = ",i,in/i);
				break;
			}
		}
		for(j=i+1;j<=in;j++)
		{
			if(in%j==0)
			{
				printf("%ld * %ld\n",j,in/j);
				break;
			}
		}
	}
	return 0;
}
