//Lumberjack Sequencing (#11942)
//Sadeq

#include<stdio.h>

int main()
{
	long cas,cc;
	long i;
	long number[10];
	long orderU,orderD;
	scanf("%ld",&cas);
	printf("Lumberjacks:\n");
	for(cc=1;cc<=cas;cc++)
	{
		for(i=0;i<10;i++)
		{
			scanf("%ld",&number[i]);
		}

		//check the output
		orderU=1;
		orderD=1;

		//check upper
		for(i=0;i<9;i++)
		{
			if(number[i]>number[i+1])
			{
				orderU=0;
			}
			if(number[i]<number[i+1])
			{
				orderD=0;
			}
		}

		if(orderU==1 || orderD==1)
		{
			printf("Ordered\n");
		}
		else
		{
			printf("Unordered\n");
		}

	}
	return 0;
}
