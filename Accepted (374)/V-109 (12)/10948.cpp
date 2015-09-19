//The primary problem (#10948)
//Sadeq

#include<stdio.h>
#include<math.h>

#define max 1000000
int seieve(long n);
long pri[max+1];

int main()
{
	int found;
	long in,i,j;
	seieve(max);

	while(scanf("%ld",&in))
	{
		if(in==0) break;
		found=0;
		printf("%ld:\n",in);
		for(i=2,j=in-2;i<=j;i++,j--)
		{
			if(pri[i]==1 && pri[j]==1)
			{
				printf("%ld+%ld\n",i,j);
				found=1;
				break;
			}
		}
		if(found==0) printf("NO WAY!\n");
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