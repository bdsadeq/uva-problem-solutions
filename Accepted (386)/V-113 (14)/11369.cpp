//Shopaholic (#11369)
//Sadeq

#include<stdio.h>
#include<algorithm>
using namespace std;

long arr[20010];

int main()
{
	long cas,c;
	long num,i,discount;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld",&num);
		for(i=0;i<num;i++)
		{
			scanf("%ld",&arr[i]);
		}

		//sort
		sort(arr,arr+num);

		//calculation
		discount=0;
		for(i=num-3;i>=0;i=i-3)
		{
			discount=discount+arr[i];
		}

		//output
		printf("%ld\n",discount);
	}

	return 0;
}
