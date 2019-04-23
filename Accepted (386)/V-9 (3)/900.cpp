//Brick wall patterns (#900)
//Sadeq

#include<stdio.h>

long long fib(long long n);

int main()
{
	long long in,result;
	while(scanf("%lld",&in))
	{
		if(in==0) break;
		result=fib(in+1);
		printf("%lld\n",result);
	}
	return 0;
}

long long fib(long long n)
{
	long long i,j,h,k,t;
	i=h=1;
	j=k=0;
	while(n>0)
	{
		if(n%2==1)
		{
			t=j*h;
			j=i*h+j*k+t;
			i=i*k+t;
		}
		t=h*h;
		h=2*k*h+t;
		k=k*k+t;
		n=(long long)n/2;
	}
	return j;
}