//Teams (#11609)
//Sadeq

#include<stdio.h>
#include<math.h>

long long square(long long x);
long long mod(long long b,long long p,long long m);

int main()
{
	int cas,c;
	long long in,temp,res;

	scanf("%d",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%lld",&in);

		temp=mod(2,in-1,1000000007);

		res=(in*temp)%1000000007;

		printf("Case #%d: %lld\n",c,res);		
	}
	return 0;
}

long long square(long long x)
{
	return x*x;
}

long long mod(long long b,long long p,long long m)
{
	if(p==0) return 1;
	else if((p%2)==0) return square(mod(b,p/2,m))%m;
	else return (b%m)*mod(b,p-1,m)%m;
}
