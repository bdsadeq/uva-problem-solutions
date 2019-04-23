//Baudot Data Communication Code (#740)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);
	char downtxt[40],uptxt[40],in[200];
	long a,b,c,d,e,res;
	long i,flag,len;

	gets(downtxt);
	gets(uptxt);

	while(gets(in))
	{
		len=strlen(in);
		flag=0;
		for(i=0;i<len;i=i+5)
		{
			a=(in[i]-'0')*16;
			b=(in[i+1]-'0')*8;
			c=(in[i+2]-'0')*4;
			d=(in[i+3]-'0')*2;
			e=(in[i+4]-'0');
			res=a+b+c+d+e;
			if(res==31) flag=1;
			if(res==27) flag=0;
			if(flag==0)
			{
				if(res==27) continue;
				printf("%c",downtxt[res]);
			}
			else if(flag==1)
			{
				if(res==31) continue;
				printf("%c",uptxt[res]);
			}
		}
		printf("\n");
	}
	return 0;
}
