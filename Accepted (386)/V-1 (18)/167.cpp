//The Sultan's Successors (#167)
//Sadeq
//8 queens backtracking

#include<stdio.h>
#include<stdlib.h>

bool place(long k,long i);
void nqueens(long k,long n);
long max,sum,x[10];
long in[10][10];

int main()
{
	long cas,c,n;
	long i,j;
	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		n=8;
		//taking input
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%ld",&in[i][j]);
			}
		}
		max=0;
		nqueens(1,n);
		printf("%5ld\n",max);
	}
	return 0;
}

bool place(long k,long i)
{
	long j,temp1,temp2;
	for(j=1;j<=k-1;j++)
	{
		temp1=abs(x[j]-i);
		temp2=abs(j-k);
		if((x[j]==i) || (temp1==temp2)) return 0;
	}
	return 1;
}

void nqueens(long k,long n)
{
	long i,j;
	for(i=1;i<=n;i++)
	{
		if(place(k,i)==1)
		{
			x[k]=i;
			if(k==n)
			{
				sum=0;
				for(j=1;j<=n;j++)
				{
					sum=sum+in[j][x[j]];
				}
				if(sum>max) max=sum;
			}
			else nqueens(k+1,n);
		}
	}
}
