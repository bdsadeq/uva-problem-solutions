//Homogeneous squares (#11055)
//Sadeq

#include<stdio.h>

long arr[1010][1010];

int main()
{
	long n,i,j;
	long hom;

	while(scanf("%ld",&n))
	{
		if(n==0) break;

		//take input
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%ld",&arr[i][j]);
			}
		}

		//calculating
		hom=1;

		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if((arr[i][j]+arr[i+1][j+1])!=(arr[i][j+1]+arr[i+1][j]))
				{
					hom=0;
					break;
				}
			}
			if(hom==0) break;
		}

		if(hom==1) printf("homogeneous\n");
		else if(hom==0) printf("not homogeneous\n");
	}

	return 0;
}
