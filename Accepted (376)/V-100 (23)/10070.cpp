//Leap Year or Not Leap Year and ... (#10070
//Sadeq

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 10000

long call_div(char *number, long div, char *result)
{
	int len=strlen(number);
	int now;
	long extra;
	char Res[MAX];
	for(now=0,extra=0;now<len;now++)
	{
		extra=extra*10+(number[now]-'0');
		Res[now]=(extra/div)+'0';
		extra=extra%div;
	}
	Res[now]='\0';
	for(now=0;Res[now]=='0';now++);
	strcpy(result,&Res[now]);
	if(strlen(result)==0) strcpy(result,"0");
	return extra;
}

int main()
{
	char year[MAX],res[MAX];
	long flag,line=0;
	long m4,m15,m55,m100,m200,m400;
	while(scanf("%s",&year)!=EOF)
	{
		m4=call_div(year,4,res);
		m15=call_div(year,15,res);
		m55=call_div(year,55,res);
		m100=call_div(year,100,res);
		m200=call_div(year,200,res);
		m400=call_div(year,400,res);
		flag=0;
		if(line==1) printf("\n");
		if((m4==0 && m100!=0) || m400==0)
		{
			printf("This is leap year.\n");
			flag=1;
		}
		if(m15==0)
		{
			printf("This is huluculu festival year.\n");
			flag=1;
		}
		if(((m4==0 && m100!=0) || m400==0) && m55==0)
		{
			printf("This is bulukulu festival year.\n");
			flag=1;
		}
		if(flag==0) printf("This is an ordinary year.\n");
		line=1;
	}
	return 0;
}