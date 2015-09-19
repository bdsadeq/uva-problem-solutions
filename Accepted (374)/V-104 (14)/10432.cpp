//Polygon inside a circle (#10432)
//Sadeq

#include<stdio.h>
#include<math.h>

#define pi 2*acos(0.0)

int main()
{
	long double r,n;
	long double result;
	while(scanf("%Lf %Lf",&r,&n)==2)
	{
		//divide into n triangles
		//fine one triangle area
		result=0.5*r*r*sin((360/n)*(pi/180));
		//then multiple with n for output
		printf("%.3Lf\n",result*n);
	}
	return 0;
}