//Twin primes (#10394)
//Sadeq

#include<stdio.h>
#include<math.h>

#define max 20000000
int seieve(long n);
long pri[max+1];
long a[100001],b[100001];

int main()
{
	long i,in;
	seieve(max);

	//create all twin primes
	long j=0;
	for(i=3;;i=i+2)
	{
		if(pri[i]==1 && pri[i+2]==1)
		{
			j++;
			a[j]=i;
			b[j]=i+2;
		}
		if(j>=100000) break;
	}

	//input & output
	while(scanf("%ld",&in)==1)
	{
		printf("(%ld, %ld)\n",a[in],b[in]);
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
