//Less prime (#10852)
//Sadeq

#include<stdio.h>

long is_prime(long n);

int main()
{
	long cas,i;
	long n,temp,prime;
	scanf("%ld",&cas);
	for(i=1;i<=cas;i++)
	{
		scanf("%ld",&n);
		temp=(n/2)+1;
		while(1)
		{
			prime=is_prime(temp);
			if(prime==1)
			{
				printf("%ld\n",temp);
				break;
			}
			temp++;
		}
	}
	return 0;
}

long is_prime(long n)
{
	long i;
	if(n==1) return 1;
	if(n==2) return 1;
	if(n%2==0) return 0;
	for(i=3;i*i<=n;i=i+2)
	{
		if(n%i==0) return 0;
	}
	return 1;
}