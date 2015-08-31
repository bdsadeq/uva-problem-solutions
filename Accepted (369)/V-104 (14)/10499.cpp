//The land of justice (#10499)
//Sadeq

#include<stdio.h>

int main()
{
	long long n;
	while(scanf("%lld",&n))
	{
		if(n<0) break;
		//simple equation to find the answer is
		if(n==1) printf("0%c\n",'%');
		else printf("%lld%c\n",n*25,'%');
	}
	return 0;
}
