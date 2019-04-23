//Diagonal (#10784)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long long n,ans,count=0;
	while(scanf("%lld",&n))
	{
		if(n==0) break;
		count++;
		ans=ceil((3+sqrt(9+8*n))/2);
		printf("Case %lld: %lld\n",count,ans);
	}
	return 0;
}