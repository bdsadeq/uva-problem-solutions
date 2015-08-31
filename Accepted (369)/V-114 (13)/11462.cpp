//Age Sort (#11462)
//Sadeq
//counting sort

#include<stdio.h>

int main()
{
	long cntr[101];
	long cas,i,j;
	long in,space;

	while(scanf("%ld",&cas))
	{
		if(cas==0) break;

		//set all to zero
		for(i=0;i<101;i++) cntr[i]=0;

		for(i=0;i<cas;i++)
		{
			scanf("%ld",&in);
			cntr[in]++;
		}

		space=0;
		for(i=0;i<101;i++)
		{
			for(j=1;j<=cntr[i];j++)
			{
				if(space==1) printf(" ");
				space=1;
				printf("%ld",i);
			}
		}
		printf("\n");
	}
	return 0;
}
