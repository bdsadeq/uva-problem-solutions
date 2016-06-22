//A Graph Problem (#11069)
//Sadeq

#include<stdio.h>

int main()
{
	long long i;
	long long out[100],in;

	out[0]=1;
	out[1]=1;
	out[2]=2;

	for(i=3;i<=76;i++)
	{
		out[i]=out[i-2]+out[i-3];
	}

	while(scanf("%lld",&in)==1)
	{
		printf("%lld\n",out[in]);
	}

	return 0;
}
