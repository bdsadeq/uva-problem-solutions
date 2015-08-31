//The Department of Redundancy Department (#484)
//Sadeq

#include<stdio.h>

long a[10000000];
long out[10000000];

int main()
{
//	freopen("in.txt","r",stdin);
	long i,j,in;
	for(i=0;i<10000000;i++)
	{
		a[i]=0;
	}

	//take input
	i=0;
	while(scanf("%ld",&in)==1)
	{
		for(j=0;j<i;j++)
		{
			if(out[j]==in)
			{
				a[j]++;
				break;
			}
		}
		if(j==i)
		{
			out[i]=in;
			a[j]++;
			i++;
		}
	}

	//output
	for(j=0;j<i;j++)
	{
		printf("%ld %ld\n",out[j],a[j]);
	}

	return 0;
}
