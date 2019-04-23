//Consecutive Integers (#11254)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	//freopen("in.txt","r",stdin);
	long in,maxn,temp;

	while(scanf("%ld",&in))
	{
		if(in==-1) break;

		maxn=(long)sqrt(2*in);

		while(1)
		{
			temp=(2*in)+maxn-(maxn*maxn);
			if(temp%(2*maxn)==0)
			{
				//printf("%ld\n",maxn);
				break;
			}
			maxn--;
		}

		printf("%ld = %ld + ... + %ld\n",in,temp/(2*maxn),(temp/(2*maxn))+maxn-1);
	}

	return 0;
}
