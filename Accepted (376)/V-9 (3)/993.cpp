//Product of digits (#993)
//Sadeq

#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
	long in,i;
	long cas,c,flag;
	vector<int> v;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld",&in);
		v.clear();
		flag=0;

		if(in==0) printf("10\n");
		else if(in==1) printf("1\n");
		else
		{
			for(i=9;i>=2;i--)
			{
				while((in%i)==0)
				{
					v.push_back(i);
					in=in/i;
				}
				if(in==1) break;
			}

			if(in>9) printf("-1\n");

			else
			{
				for(i=v.size()-1;i>=0;i--)
				{
					printf("%ld",v[i]);					
				}
				printf("\n");
			}
		}
	}

	return 0;
}
