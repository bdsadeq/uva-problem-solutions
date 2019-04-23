//Cowculations (#377)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<math.h>

long to_dec(char in[],long b);
int output(long dec,long b);

char in1[20],in2[20],res[20];

int main()
{
	int ss;
	int cas,c,i,j;
	char dm[5];
	char op[20];
	char temp[20];

	int len;
	long num1,num2;

	scanf("%d",&cas);gets(dm);
	printf("COWCULATIONS OUTPUT\n");
	for(c=1;c<=cas;c++)
	{
		//1st number
		gets(temp);
		for(i=0;i<8;i++) in1[i]='V';
		len=strlen(temp);
		{
			for(i=len-1,j=7;i>=0;i--,j--)
			{
				in1[j]=temp[i];
			}
		}

		//2nd number
		gets(temp);
		for(i=0;i<8;i++) in2[i]='V';
		len=strlen(temp);
		{
			for(i=len-1,j=7;i>=0;i--,j--)
			{
				in2[j]=temp[i];
			}
		}


		num1=to_dec(in1,4);
		num2=to_dec(in2,4);

		//get operation
		for(i=1;i<=3;i++)
		{
			gets(op);

			if(op[0]=='A') num2=num1+num2;
			else if(op[0]=='R') num2=num2/4;
			else if(op[0]=='L') num2=num2*4;
		}

		gets(res);

		ss=output(num2,4);
		if(ss==-1) printf("NO\n");
		else if(ss==1) printf("YES\n");
	}
	printf("END OF OUTPUT\n");
	return 0;
}

long to_dec(char in[],long b)
{
	long i,len,temp,n;
	long dec=0;

	len=strlen(in);
	temp=8;

	for(i=0;i<len;i++)
	{
		if(in[i]=='V') n=0;
		else if(in[i]=='U') n=1;
		else if(in[i]=='C') n=2;
		else if(in[i]=='D') n=3;

		temp--;
		dec=dec+(n*(pow(b,temp)));
	}
	return dec;
}

int output(long dec,long b)
{
	long n,j;
	long i=7;
	while(1)
	{
		n=dec%b;
		if(n==0) in2[i]='V';
		else if(n==1) in2[i]='U';
		else if(n==2) in2[i]='C';
		else if(n==3) in2[i]='D';

		dec=dec/b;
		if(dec==0) break;
		i--;
	}

	for(j=0;j<8;j++)
	{
		if(in2[j]!=res[j]) return -1;
	}
	return 1;
}
