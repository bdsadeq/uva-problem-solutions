//Hartals (#10050)
//Sadeq

#include<stdio.h>

int main()
{
	int day[3660];
	int t_day;
	int a,b,i;
	int cas;
	int party;
	int har;
	int count;
	scanf("%d",&cas);
	for(a=1;a<=cas;a++)
	{
		scanf("%d",&t_day);
		scanf("%d",&party);
		for(i=0;i<3651;i++) day[i]=0;
		for(b=1;b<=party;b++)
		{
			scanf("%d",&har);
			for(i=0;i<=t_day;i=i+har)
			{
				day[i]=1;
			}
		}
		for(i=0;i<=t_day+7;i=i+7)
		{
			day[i]=0;
			if(i>1) day[i-1]=0;
		}
		count=0;
		for(i=1;i<=t_day;i++)
		{
			if(day[i]==1) count++;
		}
		printf("%d\n",count);
		
	}
	return 0;
}