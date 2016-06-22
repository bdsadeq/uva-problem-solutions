//Emoogle Balance (#12279)
//sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);

	int num;
	int temp;
	int count;
	int cas=0;
	int i;

	while(scanf("%d",&num))
	{
		if(num==0) break;

		cas++;

		count=0;
		for(i=0;i<num;i++)
		{
			scanf("%d",&temp);
			if(temp==0) count++;

		}

		printf("Case %d: %d\n",cas,(num-count)-count);
	}


	return 0;
}
