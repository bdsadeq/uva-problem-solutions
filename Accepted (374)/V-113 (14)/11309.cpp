//COUNTING CHAOS (#11309)
//Sadeq

#include<stdio.h>

long reverse(long num);

int main()
{
	long cas,c;
	long in1,in2,in,inrev;
	long i;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld:%ld",&in1,&in2);

		in=(in1*100)+in2;

		for(i=in+1;;i++)
		{
			if((i%100)==60) i=i+40;
			if(i>2359) i=0;

			inrev=reverse(i);

			if(i==inrev)
			{
				if(i/100==0) printf("00");
				else if((i/100)<10) printf("0%ld",i/100);
				else printf("%ld",i/100);

				printf(":");

				if(i%100==0) printf("00");
				else if((i%100)<10) printf("0%ld",i%100);
				else printf("%ld",i%100);

				printf("\n");

				break;
			}
		}
	}
	return 0;
}

long reverse(long num)
{
	long sum,div,multi,temp;

	sum=0;
	div=1;
	while(div<=num)
		div*=10;
	div/=10;
	multi=1;
	while(div>1)
	{
		temp=num/div;
		num%=div;
		sum+=(temp*multi);
		div/=10;
		multi*=10;

	}
	sum+=(num*multi);
	
	return sum;
}
