//Extrapolation Using a Difference Table (#326)
//Sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);
	long arr[100];
	long n,k;
	long i,j,ans;

	while(scanf("%ld",&n))
	{
		if(n==0) break;

		//input of table list
		for(i=0;i<n;i++)
		{
			scanf("%ld",&arr[i]);
		}

		scanf("%ld",&k);

		//calculation and create difference table
		for(j=n-1;j>0;j--)
		{
			for(i=0;i<j;i++)
			{
				arr[i]=arr[i+1]-arr[i];
			}
		}

		//calculation and create originial table
		for(i=0;i<k;i++)
		{
			for(j=0;j<n;j++)
			{
				if(j>0) arr[j]=arr[j]+arr[j-1];
			}
		}

		ans=arr[n-1];

		//output
		printf("Term %ld of the sequence is %ld\n",n+k,ans);
	}

	return 0;
}
