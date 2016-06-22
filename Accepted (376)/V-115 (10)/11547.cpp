//AUTOMATIC ANSWER (#11547)
//Sadeq

#include<stdio.h>

int main()
{
	long in;
	long c,cas;
	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld",&in);
		in=in*567;
		in=in/9;
		in=in+7492;
		in=in*235;
		in=in/47;
		in=in-498;
		if(in<0) in=-in;
		in=(in/10)%10;
		printf("%ld\n",in);
	}
	return 0;
}
