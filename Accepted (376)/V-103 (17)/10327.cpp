//Flip Sort (#10327)
//Sadeq

#include<stdio.h>

int main()
{
	long l,j,x,y,n[2000],temp;
	long count;
	while(scanf("%ld",&l)!=EOF)
	{
		for(j=1;j<=l;j++)
		{
			scanf("%ld",&n[j]);
		}
		count=0;
		for(x=1;x<=l-1;x++)
		{
			for(y=1;y<=l-x;y++)
			{
				if(n[y]>n[y+1])
				{
					temp=n[y+1];
					n[y+1]=n[y];
					n[y]=temp;
					count++;
				}
			}
		}
		printf("Minimum exchange operations : %ld\n",count);
	}
	return 0;
}