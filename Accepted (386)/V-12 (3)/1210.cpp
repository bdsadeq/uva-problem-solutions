//Sum of Consecutive Prime Numbers (#1210)
//sadeq

#include<stdio.h>

long is_prime(long n)
{
	long i;
	if(n==1) return 0;
	if(n==2) return 1;
	if(n%2==0) return 0;
	for(i=3;i*i<=n;i=i+2)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

int main()
{
	//freopen("in.txt","r",stdin);

	long inp;
	long primeArray[10000];
	long i,j;
	long primeCount=0;

	//create the prime array
	for(i=2;i<=10000;i++)
	{
		if(is_prime(i)==1)
		{
			primeArray[primeCount]=i;
			primeCount++;
		}
	}

	//primeCount is the total prime number from 2 to 10000

	long combination;
	long sum;

	while(scanf("%ld",&inp))
	{
		if(inp==0) break;

		combination=0;

		for(i=0;i<primeCount;i++)
		{
			sum=0;

			for(j=i;j<primeCount;j++)
			{
				if(sum==inp)
				{
					combination++;
					break;
				}
				sum=sum+primeArray[j];

				if(sum>inp)
				{
					break;
				}


			}	
		}


		printf("%ld\n",combination);

	}

	return 0;
}
