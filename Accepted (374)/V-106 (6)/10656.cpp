//Maximum Sum II (#10656)
//Sadeq

#include<stdio.h>

int main()
{
	long n,i,j,seq[12000],t;
	while(1)
	{
		scanf("%ld",&n);
		if(n==0) break;
		j=0;
		for(i=0;i<n;i++)
		{
			scanf("%ld",&t);
			if(t!=0)
			{
				seq[j]=t;
				j++;
			}
		}
		if(j==0) printf("0\n");
		else
		{
			for(i=0;i<j;i++)
			{
				if(i!=0) printf(" ");
				printf("%ld",seq[i]);
			}
			printf("\n");
		}
	}
	return 0;
}