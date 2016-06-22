//Happy Number (#10591)
//Sadeq

#include<stdio.h>
#include<vector>
using namespace std;

long dig_sq(long in);

int main()
{
	vector<long> v;
	long cas,c,i;
	long in,sum,temp;
	long hp,fnd;
	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld",&in);
		v.clear();
		v.push_back(in);
		hp=0;
		temp=in;
		while(1)
		{
			sum=dig_sq(temp);
			if(sum==1)
			{
				hp=1;
				break;
			}
			fnd=0;
			for(i=0;i<v.size();i++)
			{
				if(sum==v[i])
				{
					fnd=1;
					break;
				}
			}
			if(fnd==1)
			{
				hp=0;
				break;
			}
			v.push_back(sum);
			temp=sum;
		}

		//output
		if(hp==1) printf("Case #%ld: %ld is a Happy number.\n",c,in);
		else if(hp==0) printf("Case #%ld: %ld is an Unhappy number.\n",c,in);
	}
	return 0;
}

long dig_sq(long in)
{
	long r,sum=0;
	while(1)
	{
		r=in%10;
		sum=sum+(r*r);
		in=in/10;
		if(in==0) break;
	}
	return sum;
}
