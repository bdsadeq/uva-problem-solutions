//Basically speaking (#389)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<math.h>

long to_dec(char in[],long b);
int output(long dec,long b);

int main()
{
	char in[100];
	long out,b, dec;

	while(scanf("%s %ld %ld",&in,&b,&out)==3)
	{
		//conert to decimal
		dec=to_dec(in,b);

		//call output function
		output(dec,out);
	}
	return 0;
}

//convert to decimal from any base
long to_dec(char in[],long b)
{
	long i,len,temp,n;
	long dec=0;

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

//convert from decimal to any base
int output(long dec,long b)
{
	char out[100];
	long n,j;
	long i=0;

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

	//output
	if(i>6) printf("  ERROR\n");
	else
	{
		for(j=6-i;j>=1;j--) printf(" ");
		for(j=i;j>=0;j--)
		{
			printf("%c",out[j]);
		}
		printf("\n");
	}

	return 0;
}