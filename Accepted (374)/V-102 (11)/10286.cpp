//Trouble with a Pentagon (#10286)
//Sadeq

#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)

int main()
{
	long double s,f;
	while((scanf("%Lf",&f))!=EOF)
	{
		s=(f*(sin(108*pi/180)))/(sin(63*pi/180));
		printf("%.10Lf\n",s);
	}
	return 0;
}