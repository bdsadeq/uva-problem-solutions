//ClockHands (#579)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	double h,m;
	double hangle,mangle,angle;
	while(scanf("%lf:%lf",&h,&m))
	{
		if(h==0 && m==0) break;
		hangle=h*30+(m/60)*30;
		mangle=m*6;
		angle=fabs(hangle-mangle);
		if(angle>180) angle=360-angle;
		printf("%.3lf\n",angle);
	}
	return 0;
}