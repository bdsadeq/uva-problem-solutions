//Goldbach's Conjecture (#543)
//Sadeq

#include<stdio.h>
#include<math.h>

#define max 1000000
int seieve(long n);
long pri[max+1];

int main()
{
	long in;
	long i,j;
	long tag;

	//create prime using 0 and 1
	seieve(max);

	while(scanf("%ld",&in))
	{
		if(in==0) break;
		tag=0;
		for(i=3,j=in-3;i<=j;i=i+2,j=j-2)
		{
			if(pri[i]==1 && pri[j]==1)
			{
				if(in==(i+j))
				{
					printf("%ld = %ld + %ld\n",in,i,j);
					tag=1;
					break;
				}
			}
		}
		if(tag==0) printf("Goldbach's conjecture is wrong.\n");
	}	
	return 0;
}

//create all prime
int seieve(long n)
{
	long i,j,imax,jmax;
	for(i=0;i<=max;i++) pri[i]=1;
	imax=sqrt(n)+1;
	for(i=2;i<=imax;i++)
	{
		jmax=(n/i)+1;
		if(pri[i]==1)
		{
			for(j=2;j<=jmax;j++)
			{
				if(i*j<=n) pri[i*j]=0;
			}
		}
	}
	return 0;
}