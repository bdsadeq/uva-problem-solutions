//Goldbach's Conjecture (II) (#686)
//Sadeq

#include<stdio.h>
#include<math.h>

#define max 35000
int seieve(long n);
long pri[max+1];

int main()
{
	long in;
	long i,j;
	long count;

	//create prime using 0 and 1
	seieve(max);

	while(scanf("%ld",&in))
	{
		if(in==0) break;
		count=0;
		if(in==4) printf("1\n");
		else
		{
			for(i=3,j=in-3;i<=j;i=i+2,j=j-2)
			{
				if(pri[i]==1 && pri[j]==1)
				{
					if(in==(i+j)) count++;
				}
			}
			printf("%ld\n",count);
		}
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