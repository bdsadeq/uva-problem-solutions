//Triangle Trouble (#11579)
//Sadeq
//area of triangle

#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);
	long cas,c;
	long n,i;
	double arr[10100],max;
	double area,s;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lf",&arr[i]);
		}

		//sort them
		sort(arr,arr+n);

		//calculate
		max=0.0;
		for(i=2;i<n;i++)
		{
			if((arr[i-2]+arr[i-1])<=arr[i]) continue;
			else
			{
				s=(arr[i-2]+arr[i-1]+arr[i])/2;
				area=sqrt(s*(s-arr[i-2])*(s-arr[i-1])*(s-arr[i]));
				if(area>max) max=area;
			}
		}
		//output
		printf("%.2lf\n",max);
	}
	return 0;
}
