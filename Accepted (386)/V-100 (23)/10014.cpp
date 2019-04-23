//Simple calculations (#10014)
//Sadeq

#include<stdio.h>

int main()
{
	double c[3010],sum;
	double a,an;
	long cas,cc,n,i;

	scanf("%ld",&cas);
	for(cc=1;cc<=cas;cc++)
	{
		scanf("%ld",&n);
		scanf("%lf",&a);
		scanf("%lf",&an);

		sum=0;
		for(i=1;i<=n;i++)
		{
			scanf("%lf",&c[i]);
			sum=sum+(c[i]*(n-i+1));
		}

		sum=(n*a)+an-(2*sum);
		sum=sum/(n+1);

		if(cc>1) printf("\n");
		printf("%.2lf\n",sum);
	}

	return 0;
}
