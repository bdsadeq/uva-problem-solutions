//Car (#11715)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	//freopen("in.txt","r",stdin);

	long cas=0;
	long n;
	double a,b,c;
	double ans1,ans2;

	while(scanf("%ld",&n))
	{
		if(n==0) break;

		scanf("%lf %lf %lf",&a,&b,&c);

		if(n==1)
		{
			ans1=((a+b)*c)/2;
			ans2=(b-a)/c;
		}
		else if(n==2)
		{
			ans1=((b*b)-(a*a))/(2*c);
			ans2=(b-a)/c;
		}
		else if(n==3)
		{
			ans1=sqrt((a*a)+(2*b*c));
			ans2=(ans1-a)/b;
		}
		else if(n==4)
		{
			ans1=sqrt((a*a)-(2*b*c));
			ans2=(a-ans1)/b;
		}

		cas++;
		printf("Case %ld: %.3lf %.3lf\n",cas,ans1,ans2);
	}

	return 0;
}
