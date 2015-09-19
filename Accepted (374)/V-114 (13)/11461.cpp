//Square Numbers (#11461)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long long a,b;
	long long i;
	long long count,temp;
	while(scanf("%lld %lld",&a,&b))
	{
		if(a==0 && b==0) break;
		count=0;
		for(i=a;i<=b;i++)
		{
			temp=sqrt(i);
			if(i==(temp*temp)) count++;
		}
		printf("%lld\n",count);
	}
	return 0;
}
