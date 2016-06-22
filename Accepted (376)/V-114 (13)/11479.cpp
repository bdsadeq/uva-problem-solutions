//Is this the easiest problem? (#11479)
//Sadeq

#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	long long v[3];
	long long cas,c;

	scanf("%lld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%lld %lld %lld",&v[0],&v[1],&v[2]);
		sort(v,v+3);

		printf("Case %lld: ",c);
		if((v[0]+v[1])<=v[2])
		{
			printf("Invalid\n");
		}
		else if(v[0]==v[1] && v[1]==v[2])
		{
			printf("Equilateral\n");
		}
		else if(v[0]==v[1] || v[1]==v[2] || v[2]==v[3])
		{
			printf("Isosceles\n");
		}
		else
		{
			printf("Scalene\n");
		}
	}
	return 0;
}
