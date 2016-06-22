//Pizza Cutting (#10079)
//Sadeq

#include<stdio.h>

int main()
{
	long long n,result;
	while(scanf("%lld",&n))
	{
		if(n<0) break;
		//This is a straight forward forluma
		result=(n+n*n)/2+1;
		printf("%lld\n",result);
	}
	return 0;
}
