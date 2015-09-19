//Doom's Day Algorithm (#12019)
//Sadeq
//following DP concept

#include<stdio.h>

int main()
{
	long cas,cc;
	long i,j,totalDay,day=1;
	char weekName[10][20]={"","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};

	//create list fisrt
	long ans[20][40];
	for(i=1;i<=12;i++)
	{
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
		{
			totalDay=31;
		}
		else if(i==2)
		{
			totalDay=28;
		}
		else
		{
			totalDay=30;
		}

		for(j=1;j<=totalDay;j++)
		{
			ans[i][j]=day;
			day++;
			if(day==8)
			{
				day=1;
			}
		}

	}


	//take input and process the output
	long mn,dy;
	scanf("%ld",&cas);
	for(cc=1;cc<=cas;cc++)
	{
		scanf("%ld %ld",&mn,&dy);
		printf("%s\n",weekName[ans[mn][dy]]);
	}

	return 0;
}
