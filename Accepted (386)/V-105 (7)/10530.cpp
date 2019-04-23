//Guessing Game (#10530)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	int ans[11],num;
	int i,end=0;
	char txt[10];
	ans[0]=0;
	while(1)
	{
		for(i=1;i<=10;i++) ans[i]=1;
		while(1)
		{
			scanf("%d",&num);
			if(num==0)
			{
				end=1;
				break;
			}
			scanf("%s",&txt);
			int len=strlen(txt);
			if(txt[len-1]=='h')
			{
				for(i=10;i>=num;i--) ans[i]=0;
			}
			else if(txt[len-1]=='w')
			{
				for(i=1;i<=num;i++) ans[i]=0;
			}
			else if(txt[len-1]=='n')
			{
				if(ans[num]==0) printf("Stan is dishonest\n");
				if(ans[num]==1) printf("Stan may be honest\n");
				break;
			}
		}
		if(end==1) break;
	}
	return 0;
}