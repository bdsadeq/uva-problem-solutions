//The Twin Towers (#10066)
//Sadeq

#include<stdio.h>

int main()
{
	long in1[200],in2[200],c[200][200];
	long len1,len2;
	long i,j,count=0;
	while(scanf("%ld %ld",&len1,&len2))
	{
		if(len1==0 && len2==0) break;
		count++;

		//take input
		for(i=0;i<len1;i++)
		{
			scanf("%ld",&in1[i]);
		}
		for(i=0;i<len2;i++)
		{
			scanf("%ld",&in2[i]);
		}

		//LCS length
		for(i=0;i<=len1;i++) c[i][0]=0;
		for(j=0;j<=len2;j++) c[0][j]=0;

		for(i=1;i<=len1;i++)
		{
			for(j=1;j<=len2;j++)
			{
				if(in1[i-1]==in2[j-1]) c[i][j]=c[i-1][j-1]+1;
				else if(c[i-1][j]>=c[i][j-1]) c[i][j]=c[i-1][j];
				else c[i][j]=c[i][j-1];
			}
		}

		//output
		printf("Twin Towers #%ld\n",count);
		printf("Number of Tiles : %ld\n\n",c[len1][len2]);
	}
	return 0;
}
