//Digit Counting (#1225)
//Sadeq

#include<stdio.h>

int main()
{
	long cc,cas;
	long in,i;
	long sum[10],temp;

	scanf("%ld",&cas);

	for(cc=1;cc<=cas;cc++)
	{
		scanf("%ld",&in);

		for(i=0;i<10;i++)
		{
			sum[i]=0;
		}

		for(i=1;i<=in;i++)
		{
			temp=i;
			while(1)
			{
				sum[temp%10]++;
				temp=temp/10;
				if(temp==0) break;
			}

		}

		for(i=0;i<10;i++)
		{
			if(i>0) printf(" ");
			printf("%ld",sum[i]);
		}
		printf("\n");

	}

	return 0;
}
