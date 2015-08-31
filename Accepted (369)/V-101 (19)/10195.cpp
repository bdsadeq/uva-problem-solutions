//The knights of the round table (#10195)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long double a,b,c,s,r,x,y,z,temp;
	while(scanf("%Lf %Lf %Lf",&a,&b,&c)==3)
	{
		s=(a+b+c)/2;
		x=s-a;
		y=s-b;
		z=s-c;
		temp=(x*y*z)/s;
		r=sqrtl(temp);;
		
		//output
		if(a==0 || b==0 || c==0) printf("The radius of the round table is: 0.000\n");
		else if(s==0) printf("The radius of the round table is: 0.000\n");
		else printf("The radius of the round table is: %.3Lf\n",r);
	}
	return 0;
}