//Where is the Marble? #10474
//Sadeq

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);

	long N,Q;
	long cas=0,i,temp,j;
	vector<long> V;
	bool flag;

	while(scanf("%ld %ld",&N,&Q))
	{
		if(N==0 && Q==0)
		{
			break;
		}

		cas++;

		V.clear();

		for(i=0;i<N;i++)
		{
			scanf("%ld",&temp);
			V.push_back(temp);
		}

		sort(V.begin(),V.end());

		printf("CASE# %ld:\n",cas);

		for(i=0;i<Q;i++)
		{
			scanf("%ld",&temp);
			flag=0;
			for(j=0;j<N;j++)
			{
				if(V[j]==temp)
				{
					printf("%ld found at %ld\n",temp,j+1);
					flag=1;
					break;
				}

				//if(temp>V[j])
				//{
				//	break;
				//}
			}

			if(flag==0)
			{
				printf("%ld not found\n",temp);
			}
		}

	}

	return 0;
}
