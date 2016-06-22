//If We Were a Child Again (#10494)
//Sadeq

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 3000

long long call_div(char *number, long long div, char *result)
{
	int len=strlen(number);
	int now;
	long long extra;
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
	char fir[MAX], sign, res[MAX];
	long long sec, remainder;
	while(scanf("%s %c %lld",&fir,&sign,&sec)==3)
	{
		if(sign=='/')
		{
			remainder=call_div(fir,sec,res);
			int len=strlen(res);
			for(int i=0;i<len;i++)
			{
				printf("%c",res[i]);
			}
			printf("\n");
		}
		if(sign=='%')
		{
			remainder=call_div(fir,sec,res);
			printf("%lld\n",remainder);
		}
	}
	return 0;
}