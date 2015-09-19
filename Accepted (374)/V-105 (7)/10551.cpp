//Basic Remains (#10551)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<math.h>

long to_dec(char in[],long b);
int output(long dec,long b);

int main()
{
	char in[1200],rem[1200];
	long base,R;
	long len,i;
	long result;
	while(scanf("%ld",&base))
	{
		if(base==0) break;
		scanf("%s %s",&in,&rem);
		R=to_dec(rem,base);
		len=strlen(in);
		result=0;
		for(i=0;i<len;i++)
		{
			result=result*base;
			result=result+(in[i]-'0');
			result=result%R;
		}
		output(result,base);
	}
	return 0;
}

long to_dec(char in[],long b)
{
	long i,len,temp,n;
	long dec=0;
	len=strlen(in);
	temp=len;
	for(i=0;i<len;i++)
	{
		n=in[i]-'0';
		temp--;
		dec=dec+(n*(pow(b,temp)));
	}
	return dec;
}

int output(long dec,long b)
{
	char out[100];
	long n,j;
	long i=0;
	while(1)
	{
		n=dec%b;
		out[i]=n+'0';
		dec=dec/b;
		if(dec==0) break;
		i++;
	}
	for(j=i;j>=0;j--)
	{
		printf("%c",out[j]);
	}
	printf("\n");
	return 0;
}
