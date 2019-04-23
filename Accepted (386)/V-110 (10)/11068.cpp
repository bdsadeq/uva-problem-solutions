//An Easy Task (#11068)
//Sadeq
//Geometry

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define error 1e-15

int main()
{
	//freopen("in.txt","r",stdin);
	double a1,a2,b1,b2,c1,c2;
	double x,y;

	while(scanf("%lf %lf %lf %lf %lf %lf",&a1,&b1,&c1,&a2,&b2,&c2))
	{
		if(a1==0 && b1==0 && c1==0 && a2==0 && b2==0 && c2==0) break;
		c1=-c1;
		c2=-c2;

		if(fabs((a1*b2)-(a2*b1))<error)
		{
			printf("No fixed point exists.\n");
		}
		else
		{
			x=((b1*c2)-(b2*c1))/((a1*b2)-(a2*b1));
			y=((c1*a2)-(c2*a1))/((a1*b2)-(a2*b1));
			printf("The fixed point is at %.2lf %.2lf.\n",x,y);
		}
	}

	return 0;
}
