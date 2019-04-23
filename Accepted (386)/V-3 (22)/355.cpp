//The Bases Are Loaded (#355)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<math.h>

long long to_dec(char in[],long long b);
long long output(long long dec,long long b);
long long test(char in[],long long b);

int main()
{
	long long dec;
	char dig[200];
	long long base1,base2,lig;
	while(scanf("%lld %lld %s",&base1,&base2,&dig)==3)
	{
		//test legal or not
		lig=test(dig,base1);

		if(lig==0)
		{
			printf("%s is an illegal base %lld number\n",dig,base1);
		}

		if(lig==1)
		{
			dec=to_dec(dig,base1);
			printf("%s base %lld = ",dig,base1);
			output(dec,base2);
			printf(" base %lld\n",base2);
		}
	}
	return 0;
}

//Convert to decimal from any base
long long to_dec(char in[],long long b)
{
	long long i,len,temp,n;
	long long dec=0;
	len=strlen(in);
	temp=len;
	for(i=0;i<len;i++)
	{
		if(in[i]=='A') n=10;
		else if(in[i]=='B') n=11;
		else if(in[i]=='C') n=12;
		else if(in[i]=='D') n=13;
		else if(in[i]=='E') n=14;
		else if(in[i]=='F') n=15;
		else n=in[i]-'0';
		temp--;
		dec=dec+(n*(pow(b,temp)));
	}
	return dec;
}

//Convert from decimal to any base
long long output(long long dec,long long b)
{
	char out[200];
	long long n,j;
	long long i=0;
	while(1)
	{
		n=dec%b;
		if(n==10) out[i]='A';
		else if(n==11) out[i]='B';
		else if(n==12) out[i]='C';
		else if(n==13) out[i]='D';
		else if(n==14) out[i]='E';
		else if(n==15) out[i]='F';
		else out[i]=n+'0';
		dec=dec/b;
		if(dec==0) break;
		i++;
	}
	for(j=i;j>=0;j--)
	{
		printf("%c",out[j]);
	}
	return 0;
}

long long test(char in[],long long b)
{
	char list[17]="0123456789ABCDEF";
	long long i,j;
	long long len=strlen(in);
	for(i=0;i<len;i++)
	{
		for(j=b;j<17;j++)
		{
			if(in[i]==list[j]) return 0;
		}
	}
	return 1;
}
