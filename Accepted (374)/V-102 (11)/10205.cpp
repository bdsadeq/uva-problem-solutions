//Stack 'em Up (#10205)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int arr[110][60],n,i,j;
	int card[60],cardnew[60];
	int cas,c,len,temp;
	char in[5],dm[5];

	scanf("%d",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%d",&n);
		for(i=1;i<=52;i++) card[i]=i;

		for(i=1;i<=n;i++)
		{
			for(j=1;j<=52;j++)
			{
				scanf("%d",&temp);
				arr[i][j]=temp;
			}
		}

		//gets(dm);
		//while(gets(in))
		for(j=1;j<=n;j++)
		{
			//len=strlen(in);
			//if(len==0) break;
			//temp=in[0]-'0';
			scanf("%d",&temp);
			for(i=1;i<=52;i++)
			{
				cardnew[i]=card[arr[temp][i]];
			}
			for(i=1;i<=52;i++) card[i]=cardnew[i];
		}

		//output
		if(c>1) printf("\n");
		for(i=1;i<=52;i++)
		{
			temp=card[i];
			while(temp>13)
			{
				temp=temp-13;
			}
			//temp=(card[i]%13)+1;
			if(temp>=1 && temp<=9) printf("%d of ",temp+1);
			else if(temp==10) printf("Jack of ");
			else if(temp==11) printf("Queen of ");
			else if(temp==12) printf("King of ");
			else if(temp==13) printf("Ace of ");

			if(card[i]>=1 && card[i]<=13) printf("Clubs\n");
			else if(card[i]>=14 && card[i]<=26) printf("Diamonds\n");
			else if(card[i]>=27 && card[i]<=39) printf("Hearts\n");
			else if(card[i]>=40 && card[i]<=52) printf("Spades\n");
		}
	}

	return 0;
}
