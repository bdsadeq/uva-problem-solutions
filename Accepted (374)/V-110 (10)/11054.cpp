//Wine trading in Gergovia (#11054)
//Sadeq

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	long n,i;
	long long k,d,in;

	while(scanf("%ld",&n))
	{
		if(n==0) break;

		k=0;
		d=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&in);

			k=k+abs(d);
			d=d+in;
		}

		//output
		printf("%lld\n",k);
	}
	
	return 0;
}
