//Parity (#10931)
//Sadeq

#include<stdio.h>

int output(long dec);

int main()
{
	long in;
	while(scanf("%ld",&in))
	{
		if(in==0) break;
		output(in);
	}
	return 0;
}

int output(long dec)
{
	char out[100];
	long n,j;
	long i=0,parity=0;

	while(1)
	{
		n=dec%2;
		if(n==1) parity++;
		out[i]=n+'0';
		dec=dec/2;
		if(dec==0) break;
		i++;
	}

	//output
	printf("The parity of ");
	for(j=i;j>=0;j--) printf("%c",out[j]);
	printf(" is %ld (mod 2).\n",parity);

	return 0;
}