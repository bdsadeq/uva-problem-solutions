//Euclid Problem (#10104)
//Sadeq

#include<stdio.h>

int main()
{
	long long a,b;
	long long x,y,lastx,lasty,temp,q;
	while(scanf("%lld %lld",&a,&b)==2)
	{
		x=0;
		y=1;
		lastx=1;
		lasty=0;
		while(b!=0)
		{
			temp=b;
			q=a/b;
			b=a%b;
			a=temp;

			temp=x;
			x=lastx-q*x;
			lastx=temp;

			temp=y;
			y=lasty-q*y;
			lasty=temp;
		}
		printf("%lld %lld %lld\n",lastx,lasty,a);
	}
	return 0;
}