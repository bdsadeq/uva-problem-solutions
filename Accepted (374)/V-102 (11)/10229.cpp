//Modular Fibonacci (#10229)
//Sadeq

#include<stdio.h>
#include<math.h>

long long fib(long long n,long long m);

int main()
{
	long long in,m;
	long long pw,result;
	while(scanf("%lld %lld",&in,&m)==2)
	{
		pw=pow(2,m);
		result=fib(in,pw);
		printf("%lld\n",result);
	}
	return 0;
}

//calculate fib_num with modulus operation
long long fib(long long n,long long m)
{
	long long i,j,h,k,t;

	i=h=1;
	j=k=0;
	while(n>0)
	{
		if(n%2==1)
		{
			t=((j%m)*(h%m))%m;
			j=((i*h)%m+(j*k)%m+(t%m))%m;
			i=((i%m)*(k%m)+(t%m))%m;
		}
		t=((h%m)*(h%m))%m;
		h=((2%m)*(k%m)*(h%m)+(t%m))%m;
		k=((k%m)*(k%m)+(t%m))%m;
		n=(long long)n/2;
	}
	return j;
}
