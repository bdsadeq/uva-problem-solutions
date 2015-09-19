//Ternary (#11185)
//Sadeq

#include<stdio.h>
#include<string.h>

void output(long dec,long b);

int main()
{
	long in;
	while(scanf("%ld",&in))
	{
		if(in<0) break;
		output(in,3);
	}
	return 0;
}

//Convert from decimal to any base
void output(long dec,long b)
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
}
