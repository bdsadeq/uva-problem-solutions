//Etruscan Warriors Never Play Chess (#11614)
//Sadeq
//i use formula summation like 1+2+3+3+.....+n=(n(n+1))/2
//then solution after calculation by ""DIGHAT SOMIKARAN" solving only taking positive part

#include<stdio.h>
#include<math.h>

int main()
{
	long long cas,c;
	long long in,ans;

	scanf("%lld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%lld",&in);

		ans=(-1+sqrt(1+8*in))/2;

		printf("%ld\n",ans);
	}

	return 0;
}
