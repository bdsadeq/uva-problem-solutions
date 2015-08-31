//Bafana Bafana (#11805)
//Sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);
	long cas,cc;
	long N,K,P;
	long ans;
	long i;

	scanf("%ld",&cas);

	for(cc=1;cc<=cas;cc++)
	{
		scanf("%ld %ld %ld",&N,&K,&P);
		ans=K;

		for(i=1;i<=P;i++)
		{
			ans++;
			if(ans>N)
			{
				ans=ans-N;
			}
			//printf("%ld ",ans);
		}

		printf("Case %ld: %ld\n",cc,ans);

	}

	return 0;

}
