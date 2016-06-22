//Squares (#636)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<math.h>

long to_dec(char in[],long b);

int main()
{
	//freopen("in.txt","r",stdin);

	char in[100];
	long base,temp,dec;
	long len,max,i;

	while(gets(in))
	{
		if(strcmp(in,"0")==0) break;

		//find max value
		max=0;
		len=strlen(in);
		for(i=0;i<len;i++)
		{
			if((in[i]-'0')>max) max=in[i]-'0';
		}

		for(base=max+1;base<=99;base++)
		{
			dec=to_dec(in,base);

			//test
			//printf("%ld\n",dec);

			temp=(long)sqrt(dec);

			if(dec==(temp*temp))
			{
				printf("%ld\n",base);
				break;
			}
		}
	}

	return 0;
}

long to_dec(char in[],long b)
{
	//test
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
