//Factorial! You Must be Kidding!!! (#10323)
//Sadeq

#include<stdio.h>

int main()
{
	long long n,fac,i;
	while(scanf("%lld",&n)==1)
	{
		fac=1;
		for(i=1;i<=n;i++)
		{
			if(n>=14) break;
			fac=fac*i;
		}
		if(n<0 && (n%2)==0) printf("Underflow!\n");
		else if(n<0 && (n%2)==-1) printf("Overflow!\n");
		else if(n>13) printf("Overflow!\n");
		else if(fac<10000) printf("Underflow!\n");
		else printf("%lld\n",fac);
	}
	return 0;
}