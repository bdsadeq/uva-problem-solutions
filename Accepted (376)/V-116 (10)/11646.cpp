//Athletics Track (#11646)
//Sadeq

#include<stdio.h>
#include<math.h>

#define PI 2*acos(0)

int main()
{
	double a,b;
	double x,angle;
	long cas=0;

	while(scanf("%lf : %lf",&a,&b)==2)
	{
		cas++;
		angle=asin(b/sqrt((a*a)+(b*b)));
		x=400/(((PI*sqrt((a*a)+(b*b)))/(PI/2))*angle+(2*a));

		printf("Case %ld: %lf %lf\n",cas,x*a,x*b);
	}

	return 0;
}
