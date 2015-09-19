//Box of Bricks (#591)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	int b[50],i,cas=0;
	int n,ave,sum;
	while(1)
	{
		scanf("%d",&n);
		if(n==0) break;
		cas++;
		sum=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
			sum=sum+b[i];
		}
		ave=sum/n;
		sum=0;
		for(i=0;i<n;i++)
		{
			sum=sum+abs(ave-b[i]);
		}
		sum=sum/2;
		printf("Set #%d\n",cas);
		printf("The minimum number of moves is %d.\n",sum);
		printf("\n");
	}
	return 0;
}