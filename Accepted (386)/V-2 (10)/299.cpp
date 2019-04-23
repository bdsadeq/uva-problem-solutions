//Train Swapping (#299)
//Sadeq

#include<stdio.h>

int main()
{
	int cas,l,i,j,x,y,t[51],temp,count;
	scanf("%d",&cas);
	for(i=1;i<=cas;i++)
	{
		scanf("%d",&l);
		for(j=1;j<=l;j++)
		{
			scanf("%d",&t[j]);
		}
		count=0;
		for(x=1;x<l;x++)
		{
			for(y=x+1;y<=l;y++)
			{
				if(t[x]>t[y])
				{
					temp=t[y];
					t[y]=t[x];
					t[x]=temp;
					count++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",count);
	}
	return 0;
}