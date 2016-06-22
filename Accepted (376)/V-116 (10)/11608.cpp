//No Problem! (#11608)
//Sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);
	int s,pb[12];
	int req[12];
	int cas=1,i;

	while(scanf("%d",&s))
	{
		if(s<0) break;

		for(i=0;i<12;i++)
		{
			scanf("%d",&pb[i]);
		}

		for(i=0;i<12;i++)
		{
			scanf("%d",&req[i]);
		}

		//calculation
		printf("Case %d:\n",cas);
		for(i=0;i<12;i++)
		{
			if(s>=req[i])
			{
				printf("No problem! :D\n");
				s=s-req[i];
			}
			else
			{
				printf("No problem. :(\n");
			}
			s=s+pb[i];
		}
		cas++;
	}
	return 0;
}
