//Hello World! (#11636)
//Sadeq

#include<stdio.h>

int main()
{
	long in,count;
	long temp,cas=0;

	while(scanf("%ld",&in))
	{
		if(in<0) break;
		cas++;
		count=0;
		temp=1;

		while(1)
		{
			temp=temp*2;
			if(temp>in)
			{
				temp=temp/2;
				break;
			}
			count++;
		}

		if(temp!=in) count++;
		printf("Case %ld: %ld\n",cas,count);
	}

	return 0;
}
