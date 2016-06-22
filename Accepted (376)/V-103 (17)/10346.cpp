//Peter’s Smokes (#10346)
//Sadeq

#include<stdio.h>

int main()
{
	long n,k,t_cigar,b;
	while(scanf("%ld %ld",&n,&k)==2)
	{
		t_cigar=0;
		b=0;
		while(n>0)
		{
			t_cigar=t_cigar+n;
			b=b+n;
			n=b/k;
			b=b%k;
		}
		printf("%ld\n",t_cigar);
	}
	return 0;
}