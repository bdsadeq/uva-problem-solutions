//Hangman Judge (#489)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);

	int round;
	int len1,len2;
	int i,j,k;
	int tag,count;
	int res[10000];
	int zero;
	char sol[10000],ans[10000];

	while(scanf("%d",&round))
	{
		if(round==-1) break;
		scanf("%s %s",&sol,&ans);
		len1=strlen(sol);
		len2=strlen(ans);

		count=0;
		for(i=0;i<len1;i++) res[i]=0;

		for(i=0;i<len2;i++)
		{
			tag=0;
			for(j=0;j<len1;j++)
			{
				if(ans[i]==sol[j])
				{
					res[j]=1;
					tag=1;
				}
			}

			if(tag==0) count++;

			//check all are view or not

			zero=1;
			for(k=0;k<len1;k++)
			{
				if(res[k]==0)
				{
					zero=0;
					break;
				}
			}

			if(zero==1) break;
		}

		zero=1;
		for(k=0;k<len1;k++)
		{
			if(res[k]==0)
			{
				zero=0;
				break;
			}
		}

		
		printf("Round %d\n",round);
		if(count<7 && zero==1) printf("You win.\n");
		else if(count>=7) printf("You lose.\n");
		else printf("You chickened out.\n");
	}
	return 0;
}