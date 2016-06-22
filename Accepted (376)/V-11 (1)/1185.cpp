//Big Number (#1185)
//sadeq

#include<stdio.h>
#include<math.h>

#define PI 2*acos(0.0)

double calculateDigit(double in);

int main()
{
	//freopen("in.txt","r",stdin);

	long cas,cc;
	double in;

	scanf("%ld",&cas);

	for(cc=1;cc<=cas;cc++)
	{
		scanf("%lf",&in);
		printf("%.0lf\n",calculateDigit(in));
	}

	return 0;
}

//floor((log(2*PI*n)/2 + n*(log(n) - 1) + 1/(12*n))/log(10)) + 1 

double calculateDigit(double in)
{
	double a=(log(2*PI*in))/2;
	double b=in*((log(in))-1);
	double c= 1/(12*in);
	double d=(a+b+c)/(log(10.0));

	return floor(d)+1;

}
