//Uniform Generator (#408)
//Sadeq

#include<stdio.h>

long gcd(long a,long b);

int main()
{
	long step,mod;
	long temp;
	while(scanf("%ld %ld",&step,&mod)==2)
	{
		temp=gcd(step,mod);
		printf("%10ld%10ld    ",step,mod);
		if(temp==1) printf("Good Choice\n");
		else printf("Bad Choice\n");
		printf("\n");
	}
	return 0;
}		

long gcd(long a,long b)
{
	while(b>0)
	{
		a=a%b;
		a^=b;
		b^=a;
		a^=b;
	}
	return a;
}