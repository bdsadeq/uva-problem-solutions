//Mr. Azad and his son (#10490)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long long in, result;
	while(scanf("%lld",&in))
	{
		if(in==0) break;

		//checking the prime numbers
		if(in==11 || in==23 || in==29)
		{
			printf("Given number is prime. But, NO perfect number is available.\n");
		}
		else if (in==2 || in==3 || in==5 || in==7 || in==13 || in==17 || in==19 || in==31)
		{
			result=pow(2,in-1)*(pow(2,in)-1);
			printf("Perfect: %lld!\n",result);
		}
		else
		{
			printf("Given number is NOT prime! NO perfect number is available.\n");
		}
	}
	return 0;
}
