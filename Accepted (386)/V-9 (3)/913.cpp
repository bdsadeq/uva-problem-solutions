//Joana and the odd numbers (#913)
//Sadeq

#include<stdio.h>

int main()
{
	long long in,line,last,result;
	while(scanf("%lld",&in)==1)
	{
		//find the line number
		line=(in+1)/2;
		//find the last digit
		last=2*line*line-1;

		result=last+last-2+last-4;
		printf("%lld\n",result);
	}
	return 0;
}
