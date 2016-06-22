//Light, more light (#10110)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long long n,x,temp;;
	while(1)
	{
		scanf("%lld",&n);
		if(n==0) break;
		x=sqrt(n);
		temp=x*x;
		if(n==temp) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}