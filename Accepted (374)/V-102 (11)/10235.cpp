//Simply Emirp (#10235)
//Sadeq

#include<stdio.h>
#include<math.h>

long count_digit(long num);
long reverse(long num);
long is_prime(long n);

int main()
{
	long num,rev,prime1,prime2;
	while(scanf("%ld",&num)==1)
	{
		prime1=is_prime(num);
		rev=reverse(num);
		prime2=is_prime(rev);
		if(prime1==1 && prime2==1 && num!=rev) printf("%ld is emirp.\n",num);
		else if(prime1==1 && prime2==1) printf("%ld is prime.\n",num);
		else if(prime1==1) printf("%ld is prime.\n",num);
		else printf("%ld is not prime.\n",num);
	}
	return 0;
}

long is_prime(long n)
{
	long i;
	if(n==1) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	for(i=3;i*i<=n;i=i+2)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

long count_digit(long num)
{
	long count=0;
	while(1)
	{
		num=num/10;
		if(num==0) break;
		count++;
	}
	return count;
}

long reverse(long num)
{
	long count=count_digit(num);
	long result=0,mod;
	long i;
	for(i=count;i>=0;i--)
	{
		mod=num%10;
		num=num/10;
		result=result+mod*pow(10,i);
	}
	return result;
}