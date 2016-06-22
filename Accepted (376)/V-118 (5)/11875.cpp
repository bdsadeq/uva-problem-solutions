//Brick Game (11875)
//Sadeq

#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);

	long cas,cc;
	vector<long> all;
	long count,temp;
	long older,younger;
	long i,j;
	long ans;

	scanf("%ld",&cas);

	for(cc=1;cc<=cas;cc++)
	{
		scanf("%ld",&count);
		all.clear();

		for(i=0;i<count;i++)
		{
			scanf("%ld",&temp);
			all.push_back(temp);
		}

		//find the result;
		

		for(i=0;i<count;i++)
		{
			older=0;
			younger=0;

			ans=all[i];

			for(j=0;j<count;j++)
			{
				if(i!=j)
				{
					if(all[i]>all[j]) older++;
					else if(all[i]<all[j]) younger++;
				}
			}

			if(older==younger)
			{
				break;
			}
		}

		printf("Case %ld: %ld\n",cc,ans);

	}

	return 0;
}