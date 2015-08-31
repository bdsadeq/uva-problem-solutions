//The circumference of the circle (#438)
//Sadeq

#include<stdio.h>
#include<math.h>

#define pi 3.141592653589793

int main()
{
	long double x1,x2,x3,y1,y2,y3;
	long double a,b,c,s,l,r;
	while(scanf("%Lf %Lf %Lf %Lf %Lf %Lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
	{
		a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
		c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

		s=(a+b+c)/2;

		l=sqrt(s*(s-a)*(s-b)*(s-c));

		r=(a*b*c)/(4*l);

		printf("%.2Lf\n",2*pi*r);
	}
	return 0;
}
