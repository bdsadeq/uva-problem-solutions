//Myacm Triangles (#10112)
//Sadeq

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int isOK(long i,long j,long k);

long n;
long x[30],y[30];
long a[30][30][30];

int main()
{
	//freopen("in.txt","r",stdin);

	char ch;
	long i,j,k;
	long max;
	long ans1,ans2,ans3;

	while(scanf("%ld",&n))
	{
		if(n==0) break;

		//take input
		for(i=0;i<n;i++)
		{
			scanf("%s %ld %ld",&ch,&x[i],&y[i]);
		}

		//calculating area
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					a[i][j][k]=abs((y[k]-y[i])*(x[j]-x[i])-(y[j]-y[i])*(x[k]-x[i]));
				}
			}
		}

		//calculating max
		max=0;
		for(i=0;i<n-2;i++)
		{
			for(j=i+1;j<n-1;j++)
			{
				for(k=j+1;k<n;k++)
				{
					if(a[i][j][k]>=max && isOK(i,j,k)==1)
					{
						max=a[i][j][k];
						ans1=i;
						ans2=j;
						ans3=k;
					}
				}
			}
		}

		printf("%c%c%c\n",ans1+'A',ans2+'A',ans3+'A');
	}

	return 0;
}

int isOK(long i,long j,long k)
{
	long m;
	for(m=0;m<n;m++)
	{
		if(m!=i && m!=j && m!=k && a[i][j][k]==a[m][j][k]+a[i][m][k]+a[i][j][m])
		{
            return 0;
		}
	}
	return 1;
}
