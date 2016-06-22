//Heads / Tails Probability (#474)
//Sadeq
//help from net

#include<stdio.h>
#include<math.h>

int main()
{
	double in;
	double val1,val2;

	while(scanf("%lf",&in)==1)
	{
		val1=floor(log10(2)*in+1);
		val2=pow(2,(val1/log10(2)-in));

		printf("2^-%.0lf = %.3lfe-%.0lf\n",in,val2,val1);
	}

	return 0;
}
