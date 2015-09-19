//The grazing cow (#10678)
//Sadeq

#include<stdio.h>
#include<math.h>

#define pi 2*acos(0.0)

int main()
{
	int cas,i;
	long double d,l,a,b;
	scanf("%d",&cas);
	for(i=1;i<=cas;i++)
	{
		scanf("%Lf %Lf",&d,&l);
		a=l/2;
		b=sqrt(((l*l)/4)-((d*d)/4));
		printf("%.3Lf\n",pi*a*b);
	}
	return 0;
}