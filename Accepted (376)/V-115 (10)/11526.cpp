//H(n) (11526)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long long cas,c;
	long long in;
	long long sum,deno,start,end,i;

	scanf("%lld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%lld",&in);

		sum=0;
		//deno=1;
		//start=in;

		for(i=1;i*i<=in;i++)
		{
			if((in/i)!=i)
			{
				sum=sum+(((in/i)-(in/(i+1)))*i+(in/i));
			}
			else sum=sum+i;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
