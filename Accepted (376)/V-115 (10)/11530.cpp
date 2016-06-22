//SMS Typing (#11530)
//Sadeq

#include<stdio.h>
#include<string.h>

int cal(char in);

int main()
{
	int cas,c;
	int len,i,sum;
	char dm[5],in[200];

	scanf("%d",&cas);gets(dm);
	for(c=1;c<=cas;c++)
	{
		gets(in);
		sum=0;
		len=strlen(in);
		for(i=0;i<len;i++)
		{
			sum=sum+cal(in[i]);
		}
		printf("Case #%d: %d\n",c,sum);
	}
	return 0;
}

int cal(char in)
{
	if(in=='a' || in=='d' || in=='g' || in=='j' || in=='m' || in=='p' || in=='t' || in=='w' || in==32)
	{
		return 1;
	}
	else if(in=='b' || in=='e' || in=='h' || in=='k' || in=='n' || in=='q' || in=='u' || in=='x')
	{
		return 2;
	}
	else if(in=='c' || in=='f' || in=='i' || in=='l' || in=='o' || in=='r' || in=='v' || in=='y')
	{
		return 3;
	}
	else if(in=='s' || in=='z')
	{
		return 4;
	}
}
