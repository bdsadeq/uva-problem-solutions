//Summing Digits (#11332)
//Sadeq

#include<stdio.h>

long dig(long in);

int main()
{
	long in,sum;
	while(scanf("%ld",&in))
	{
		if(in==0) break;
		sum=in;
		while(1)
		{
			sum=dig(sum);
			if(sum<10) break;
		}
		printf("%ld\n",sum);
	}
	return 0;
}

long dig(long in)
{
	long sum=0;
	long r;
	while(1)
	{
		r=in%10;
		sum=sum+r;
		in=in/10;
		if(in==0) break;
	}
	return sum;
}
