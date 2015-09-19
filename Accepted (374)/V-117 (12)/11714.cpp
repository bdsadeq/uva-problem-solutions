//Blind Sorting (#11714)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long long in,ans;

	while(scanf("%lld",&in)==1)
	{
		//if(in<2 || in>=2147483647) break;

		ans=(in-1)+(log(in-1)/log(2));

		printf("%lld\n",ans);
	}

	return 0;
}
