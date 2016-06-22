//A Minimum Land Price (#11824)
//Sadeq

#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);

	long cas,cc;
	vector<long> list;
	long temp,i,sz;
	long money;
	long temp2,j;

	scanf("%ld",&cas);

	for(cc=1;cc<=cas;cc++)
	{
		list.clear();
		money=0;
		while(1)
		{
			scanf("%ld",&temp);
			if(temp==0) break;
			list.push_back(temp);
		}

		//sorting descending
		sort(list.begin(),list.end());

		//calculate
		sz=list.size();
		temp=sz;
		for(i=0;i<sz;i++)
		{
			temp2=1;
			for(j=1;j<=temp;j++)
			{
				temp2=temp2*list[i];
			}
			money=money+(temp2*2);
			if(money>5000000)
			{
				money=-1;
				break;
			}
			temp--;
		}

		if(money==-1) printf("Too expensive\n");
		else printf("%ld\n",money);
	}

	return 0;
}
