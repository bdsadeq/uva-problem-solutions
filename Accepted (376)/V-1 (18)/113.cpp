//Power of Cryptography (#113)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	double n,p,res;
	while(scanf("%lf %lf",&n,&p)==2)
	{
		res=pow(10,(log10(p)/n));
		printf("%.0lf\n",res);
	}
	return 0;
}