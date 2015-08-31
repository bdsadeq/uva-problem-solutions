//Perfection (#383)
//Sadeq

#include<stdio.h>

int main()
{
	long a[60005],i,j,k,sum;
	for(i=0;;i++)
	{
		scanf("%ld",&a[i]);
		if(a[i]==0) break;
	}
	printf("PERFECTION OUTPUT\n");
	for(j=0;j<i;j++)
	{
		sum=0;
		for(k=1;k<=(a[j]/2)+1;k++)
		{
			if(a[j]%k==0) sum=sum+k;
		}
		if((a[j]==1) || (a[j]==2)) printf("%5ld  DEFICIENT\n",a[j]);
		else
		{
			if(sum>a[j]) printf("%5ld  ABUNDANT\n",a[j]);
			if(sum==a[j]) printf("%5ld  PERFECT\n",a[j]);
			if(sum<a[j]) printf("%5ld  DEFICIENT\n",a[j]);
		}
	}
	printf("END OF OUTPUT\n");
	return 0;
}