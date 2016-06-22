//Maximum Sum (#108)
//Sadeq
//DP

#include<stdio.h>

long tab[120][120];

int main()
{
	//freopen("in.txt","r",stdin);
	long n;
	long i,j,k,max,temp;

	while(scanf("%ld",&n)==1)
	{
		//set all to zero
		for(i=0;i<120;i++)
		{
			for(j=0;j<120;j++)
			{
				tab[i][j]=0;
			}
		}


		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%ld",&tab[i][j]);
			}
		}

		//calculate sum
		for(i=1;i<=n;i++)
		{
			for(j=0;j<n;j++)
			{
				tab[i][j]=tab[i][j]+tab[i-1][j];
			}
		}

		//calculate maximum sum
		max=0;
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=n-i;j++)
			{
				temp=0;
				for(k=0;k<n;k++)
				{
					if(temp>=0) temp=temp+tab[i+j][k]-tab[j][k];
					else temp=tab[i+j][k]-tab[j][k];

					if(temp>max) max=temp;
				}
			}
		}

		//output
		printf("%ld\n",max);

	}

	return 0;
}
