//Summation of Polynomials (#10302)
//Sadeq

#include<stdio.h>

int main()
{
	unsigned long long x,result;
	while(scanf("%llu",&x)!=EOF)
	{
		result=((x*(x+1))/2)*((x*(x+1))/2);
		printf("%llu\n",result);
	}
	return 0;
}