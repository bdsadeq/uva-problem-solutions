//Pseudoprime numbers (#11287)
//Sadeq

#include<stdio.h>
#include<math.h>

int isprime(long long n);
long long square(long long x);
long long mod(long long b,long long p,long long m);

int main()
{
	//freopen("in.txt","r",stdin);
	long long p,a;

	while(scanf("%lld %lld",&p,&a))
	{
		if(p==0 && a==0) break;

		if((isprime(p))==1)
		{
			printf("no\n");
		}
		else if(mod(a,p,p)==a)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}

	return 0;
}

int isprime(long long n)
{
	if(n==1) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	for(long long i=3;i*i<=n;i=i+2)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

long long square(long long x)
{
	return x*x;
}

long long mod(long long b,long long p,long long m)
{
	if(p==0) return 1;
	else if((p%2)==0) return square(mod(b,p/2,m))%m;
	else return (b%m)*mod(b,p-1,m)%m;
}
