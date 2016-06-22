//Colourful Flowers (#11152)
//Sadeq

#include<stdio.h>
#include<math.h>

#define pi 2*acos(0.0)

int main()
{
	double in[3];
	double area_big,rad,tmp1,tmp2,tmp3,tmp4,tmp5;
	double area_small,inrad;
	double area_tri,s;

	while(scanf("%lf %lf %lf",&in[0],&in[1],&in[2])==3)
	{
		tmp1=in[0]*in[1]*in[2];
		tmp2=in[0]+in[1]+in[2];
		tmp3=in[1]+in[2]-in[0];
		tmp4=in[2]+in[0]-in[1];
		tmp5=in[0]+in[1]-in[2];

		rad=tmp1/(sqrt(tmp2*tmp3*tmp4*tmp5));
		area_big=pi*rad*rad;

		s=(in[0]+in[1]+in[2])/2.0;
		area_tri=sqrt(s*(s-in[0])*(s-in[1])*(s-in[2]));

		inrad=0.5*sqrt(((in[1]+in[2]-in[0])*(in[2]+in[0]-in[1])*(in[0]+in[1]-in[2]))/(in[0]+in[1]+in[2]));
		area_small=pi*inrad*inrad;

		//output
		printf("%.4lf %.4lf %.4lf\n",area_big-area_tri,area_tri-area_small,area_small);
	}
	return 0;
}
