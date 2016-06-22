//The Easiest Way (#11207)
//Sadeq

#include<stdio.h>

double min(double a, double b);
double max(double a, double b);

double list[100000];

int main()
{
	//freopen("in.txt","r",stdin);

	long n,i;
	double a,b,temp,maxx;

	while(scanf("%ld",&n))
	{
		if(n==0) break;

		maxx=0;
		for(i=0;i<n;i++)
		{
			scanf("%lf %lf",&a,&b);

			//set a is always bigger than b
			if(a<b)
			{
				temp=b;
				b=a;
				a=temp;
			}

			//calculate and hold max value;
			temp=min(a/4.0,b);

			list[i]=max(temp,b/2.0);

			if(list[i]>maxx) maxx=list[i];
		}

		//search for 1st max
		for(i=0;i<n;i++)
		{
			if(list[i]==maxx)
			{
				printf("%ld\n",i+1);
				break;
			}
		}
	}

	return 0;
}

double min(double a, double b)
{
	if(a<b) return a;
	else return b;
}

double max(double a, double b)
{
	if(a>b) return a;
	else return b;
}
