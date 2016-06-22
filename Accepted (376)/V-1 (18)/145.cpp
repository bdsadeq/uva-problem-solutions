//Gondwalaland Telecom (#145)
//Sadeq

#include<stdio.h>

int main()
{
	char c[10];
	long dig1,dig2;
	long sh,sm,eh,em;
	long stm,endm;
	long day,eve,nig;
	long cost;
	long i,j;
	long rate1,rate2,rate3;

	while(scanf("%s",&c))
	{
		if(c[0]=='#') break;
		scanf("%ld-%ld %ld %ld %ld %ld",&dig1,&dig2,&sh,&sm,&eh,&em);
		stm=sh*60+sm;
		endm=eh*60+em-1;
		day=0;
		eve=0;
		nig=0;
		cost=0;

		if(endm<stm) endm=endm+1440;

		//initialize rate
		if(c[0]=='A')
		{
			rate1=10;
			rate2=6;
			rate3=2;
		}
		if(c[0]=='B')
		{
			rate1=25;
			rate2=15;
			rate3=5;
		}
		if(c[0]=='C')
		{
			rate1=53;
			rate2=33;
			rate3=13;
		}
		if(c[0]=='D')
		{
			rate1=87;
			rate2=47;
			rate3=17;
		}
		if(c[0]=='E')
		{
			rate1=144;
			rate2=80;
			rate3=30;
		}

		//start calculation
		cost=0;
		for(j=stm;j<=endm;j++)
		{
			i=j%1440;
			if(i>=0 && i<480)
			{
				cost=cost+rate3;
				nig++;
			}
			if(i>=480 && i<1080)
			{
				cost=cost+rate1;
				day++;
			}
			if(i>=1080 && i<1320)
			{
				cost=cost+rate2;
				eve++;
			}
			if(i>=1320 && i<1440)
			{
				cost=cost+rate3;
				nig++;
			}
		}

		//output
		printf("%5ld-%4ld%6ld%6ld%6ld%3s%8.2f\n",dig1,dig2,day,eve,nig,c,(float)cost/100);
	}
	return 0;
}
