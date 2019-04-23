//LCM Cardinality (#10892)
//Sadeq

#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

long long gcd(long long a,long long b);
long long lcm(long long x,long long y);

int main()
{
	long long in,mid,size,count;
	long long i,j,temp;
	vector<long long> v;

	while(scanf("%lld",&in))
	{
		if(in==0) break;
		mid=sqrtl(in);

		v.clear();
		for(i=1;i<=mid;i++)
		{
			if((in%i)==0)
			{
				if(i==(in/i)) v.push_back(i);
				else
				{
					v.push_back(i);
					v.push_back(in/i);
				}
			}
		}

		size=v.size();

		count=0;
		for(i=0;i<size;i++)
		{
			for(j=i;j<size;j++)
			{
				temp=lcm(v[i],v[j]);
				if(temp==in)
				{
					count++;
				}
			}
		}
		
		printf("%lld %lld\n",in,count);
	}
	return 0;
}

long long gcd(long long a,long long b)
{
	if((a%b)==0) return b;
	else return gcd(b,a%b);
}

long long lcm(long long x,long long y)
{
	return ((x*y)/gcd(x,y));
}
