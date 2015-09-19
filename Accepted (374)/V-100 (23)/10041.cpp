//Vito's family (#10041)
//Sadeq

#include<stdio.h>
#include<stdlib.h>

int com(const void *a,const void *b)
{
	return *(int*)a-*(int*)b;
}

int main()
{
	int cas,r,st[3000];
	int t,i,j,k;
	int min,add[3000],sum,temp;
	scanf("%d",&cas);
	for(t=1;t<=cas;t++)
	{
		scanf("%d",&r);
		for(i=1;i<=r;i++)
		{
			scanf("%d",&st[i]);
		}
		add[0]=0;
		min=2147483647;
		for(j=1;j<=r;j++)
		{
			sum=0;
			for(k=1;k<=r;k++)
			{
				if(st[k]>st[j]) temp=st[k]-st[j];
				else temp=st[j]-st[k];
				sum=sum+temp;
			}
			add[j]=sum;
		}
		qsort(add,r+1,sizeof(int),com);
		printf("%d\n",add[1]);
	}
	return 0;
}