//Longest nap (#10191)
//Sadeq

#include<stdio.h>

int main()
{
	int turn,day=0,temp1,temp2,count,max,clock;
	int h1,m1,h2,m2;
	int t,i;
	char text[500];
	bool time[1500];
	while(scanf("%d",&turn)==1)
	{
		day++;
		//all are nap
		for(t=0;t<1500;t++) time[t]=0;

		//take input by line
		for(t=1;t<=turn;t++)
		{
			scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
			gets(text);
			temp1=h1*60+m1;
			temp2=h2*60+m2;

			//fill the nap
			for(i=temp1+1;i<=temp2;i++) time[i]=1;
		}

		//count the nap
		count=0;
		max=0;
		for(i=601;i<=1080;i++)
		{
			if(time[i]==0) count++;
			else if(time[i]==1)
			{
				if(count>max)
				{
					max=count;
					clock=i-1-max;;
				}
				count=0;
			}
		}
		if(count>max)
		{
			max=count;
			clock=i-1-max;;
		}
		
		//output
		printf("Day #%d: the longest nap starts at %d:",day,clock/60);
		if((clock%60)<10) printf("0");
		printf("%d and will last for ",clock%60);
		if(max<60) printf("%d minutes.\n",max);
		else printf("%d hours and %d minutes.\n",max/60,max%60);
	}
	return 0;
}