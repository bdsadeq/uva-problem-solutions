//Medians (#10347)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long double m1,m2,m3,s,area,temp;
	while(scanf("%Lf %Lf %Lf",&m1,&m2,&m3)==3)
	{
		area=1;
		s=(m1+m2+m3)/2;
		temp=s*(s-m1)*(s-m2)*(s-m3);
		if(temp>0) area=(4*sqrt(temp))/3;
		//output condition
		if(temp<=0) printf("-1.000\n");
		else printf("%.3Lf\n",area);
	}
	return 0;
}