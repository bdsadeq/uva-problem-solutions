//Bee (#11000)
//Sadeq

#include<stdio.h>

int main()
{
	long long n;
	long long fib[1000];
	long long i=0;

	fib[0]=0;
	fib[1]=1;

	//create fib num
	for(i=2;;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
		if(fib[i]>3000000000) break;
	}

	//input
	while(scanf("%lld",&n))
	{
		if(n==-1) break;
		n=n+2;
		printf("%lld %lld\n",fib[n]-1,fib[n+1]-1);
	}

	return 0;
}
