//Square Sums (#11470)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long n,sum,temp,space;
	long in[20][20];
	long i,j;
	long cas=0;

	while(scanf("%ld",&n))
	{
		if(n==0) break;
		cas++;

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%ld",&in[i][j]);
			}
		}

		//calculate sum & output

		temp=ceil((double)n/2);
		space=0;

		printf("Case %ld: ",cas);
		for(i=0;i<temp;i++)
		{
			if(space==1) printf(" ");
			space=1;

			sum=0;
			for(j=i;j<n;j++)
			{
				sum=sum+in[i][j];
				in[i][j]=0;
				sum=sum+in[n-1-i][j];
				in[n-1-i][j]=0;
			}
			for(j=i+1;j<n-1;j++)
			{
				sum=sum+in[j][i];
				in[j][i]=0;
				sum=sum+in[j][n-1-i];
				in[j][n-1-i]=0;
			}
			
			printf("%ld",sum);
		}
		printf("\n");
	}
	return 0;
}
