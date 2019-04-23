//Ancient village sports (#10451)
//Sadeq

#include<stdio.h>
#include<math.h>

#define pi 2*acos(0.0)

int main()
{
	long double n,A;
	long double r1_sqr,r2,A_1,A_2;
	long cas=0;
	while(scanf("%Lf %Lf",&n,&A))
	{
		if((n-3)<0) break;
		cas++;

		//radius quare of big circle
		r1_sqr=(2*A)/(sin((2*pi)/n)*n);
		//area of big circle
		A_1=pi*r1_sqr;

		//radius of small circle
		r2=(sqrt(r1_sqr))*(cos(pi/n));
		//area of small circle
		A_2=pi*r2*r2;

		//output
		printf("Case %ld: %.5Lf %.5Lf\n",cas,A_1-A,A-A_2);
	}
	return 0;
}