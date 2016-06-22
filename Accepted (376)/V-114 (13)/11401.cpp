//Triangle Counting (#11401)
//Sadeq
//help from net

#include<stdio.h>

long long area[1000000];

int main()
{
	long in,i;

	//generate data
	area[0]=0;
	for(i=1;i<1000000;i++)
	{
		area[i]=area[i-1]+((i+1)/2);
	}
	for(i=1;i<1000000;i++)
	{
		area[i]=area[i]+area[i-1];
	}

	while(scanf("%ld",&in))
	{
		if(in<3) break;

		in=in-3;
		printf("%lld\n",area[in]);
	}

	return 0;
}
