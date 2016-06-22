//GCD (#11417)
//Sadeq

#include<stdio.h>

long gcd(long a,long b);

int main()
{
	long i,j,in,g;
	while(scanf("%ld",&in))
	{
		if(in==0) break;
		g=0;
		for(i=1;i<in;i++)
		{
			for(j=i+1;j<=in;j++)
			{
				g=g+gcd(i,j);
			}
		}
		printf("%ld\n",g);
	}
	return 0;
}

long gcd(long a,long b)
{
	if((a%b)==0) return b;
	else return gcd(b,a%b);
}
