//Prime Cuts (#406)
//Sadeq

#include<stdio.h>
#include<math.h>

int seieve(long n);
bool pri[1200];

int main()
{
	int n,c;
	int list[1200];
	int i,j;
	int start,end;

	seieve(1000);
	while(scanf("%d %d",&n,&c)==2)
	{
		//create list of prime
		j=0;
		for(i=1;i<=n;i++)
		{
			if(pri[i]==1)
			{
				list[j]=i;
				j++;
			}
		}

		if(j%2==0)
		{
			if((c*2)>j)
			{
				start=0;
				end=j-1;
			}
			else
			{
				start=(j/2)-c;
				end=(j/2)+c-1;
			}
		}
		else if(j%2==1)
		{
			if((c*2-1)>j)
			{
				start=0;
				end=j-1;
			}
			else
			{
				start=((j+1)/2)-c;
				end=((j-1)/2)+c-1;
			}
		}

		//output
		printf("%d %d:",n,c);
		for(i=start;i<=end;i++)
		{
			printf(" %d",list[i]);
		}
		printf("\n\n");
	}
	return 0;
}

int seieve(long n)
{
	long i,j,imax,jmax;
	for(i=0;i<=n;i++) pri[i]=1;
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
