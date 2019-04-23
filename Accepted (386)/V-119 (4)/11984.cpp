//A Change in Thermal Unit (#11984)
//Sadeq

#include<stdio.h>

double to_farenhite(double C);
double to_celcius(double F);

int main()
{
	//freopen("in.txt","r",stdin);
	long cas,cc;
	double C,D;

	scanf("%ld",&cas);

	for(cc=1;cc<=cas;cc++)
	{
		scanf("%lf %lf",&C,&D);

		//printf("Case %ld: %.2lf\n",cc,to_farenhite(C));
		printf("Case %ld: %.2lf\n",cc,to_celcius(to_farenhite(C)+D));
		//printf("Case %ld: %.2lf\n",cc,to_celcius(to_farenhite(C)));
	}

	return 0;
}

double to_farenhite(double C)
{
	return ((9.0/5.0)*C)+32.0;
}

double to_celcius(double F)
{
	return ((F-32.0)*5.0)/9.0;
}