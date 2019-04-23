//Cost Cutting (#11727)
//Sadeq

#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	long arr[3];
	long cas,c;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld %ld %ld",&arr[0],&arr[1],&arr[2]);

		sort(arr,arr+3);

		printf("Case %ld: %ld\n",c,arr[1]);
	}

	return 0;
}
