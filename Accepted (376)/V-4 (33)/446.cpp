//Kiddles n bits (#446)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<math.h>

int to_dec(char in[]);
int binary(int dec);

int main()
{
	int cas,t;
	char dm[5],in1[100],in2[100],sign[2];
	int dec1,dec2;

	scanf("%d",&cas);
	gets(dm);
	for(t=1;t<=cas;t++)
	{
		scanf("%s %s %s",&in1,&sign,&in2);

		//calculate decimal
		dec1=to_dec(in1);
		dec2=to_dec(in2);

		//display binary
		binary(dec1);
		printf(" %s ",sign);
		binary(dec2);

		if(sign[0]=='+') printf(" = %d\n",dec1+dec2);
		if(sign[0]=='-') printf(" = %d\n",dec1-dec2);
	}
	return 0;
}

int to_dec(char in[])
{
	int i,len,temp,n;
	int dec=0;
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
		dec=dec+(n*(pow(16,temp)));
	}
	return dec;
}

int binary(int dec)
{
	char out[100];
	int n,j;
	int i=0;
	while(1)
	{
		n=dec%2;
		out[i]=n+'0';
		dec=dec/2;
		if(dec==0) break;
		i++;
	}
	//output
	for(j=12-i;j>=1;j--) printf("0");
	for(j=i;j>=0;j--)
	{
		printf("%c",out[j]);
	}
	return 0;
}
