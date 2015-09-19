//Colin and Ryan (#10880)
//Sadeq

#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

long out[1000000];

int main()
{
	//freopen("in.txt","r",stdin);
	long long c,r;
	long cas,cc;
	long i;
	long count;

	scanf("%ld",&cas);
	for(cc=1;cc<=cas;cc++)
	{
		scanf("%lld %lld",&c,&r);

		printf("Case #%ld:",cc);
		if(c==r) printf(" 0\n");
		else
		{
			count=0;
			for(i=1;i<=(long)(sqrt(c)+1);i++)
			{
				if(((c-r)%i)==0)
				{
					if(((c-r)/i)>r)
					{
						out[count]=(c-r)/i;
						count++;
					}
					if(i>r)
					{
						out[count]=i;
						count++;
					}
				}
			}

			//sort
			sort(out,out+count);

			//output
			if(count>=1) printf(" %ld",out[0]);
			for(i=1;i<count;i++)
			{
				if(out[i]!=out[i-1]) printf(" %ld",out[i]);
			}
			printf("\n");
		}
	}

	return 0;
}
