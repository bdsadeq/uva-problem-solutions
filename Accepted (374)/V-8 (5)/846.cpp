//Steps  #846
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long cas,cc;
	double a,b;

	scanf("%ld",&cas);

	for(cc=0;cc<cas;cc++)
	{
		scanf("%lf %lf",&a,&b);

		double temp=sqrt(b-a);
		temp=temp*2.0;

		temp=ceil(temp);

		if(temp-1<0)
		{
			printf("0\n");
		}
		else
		{
			printf("%.0lf\n",temp-1);
		}

	}

	return 0;
}
