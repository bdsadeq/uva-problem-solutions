//Having Fun with Matrices (#11360)
//Sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);
	long cas,c;
	long size,i,j,query,q;
	long arr[15][15];
	char in[50],com[50],dm[5];
	long a,b,temp;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld",&size);gets(dm);
		for(i=1;i<=size;i++)
		{
			gets(in);
			for(j=0;j<size;j++)
			{
				arr[i][j+1]=in[j]-'0';
			}
		}

		scanf("%ld",&query);gets(dm);
		for(q=1;q<=query;q++)
		{
			gets(in);		

			//calculation
			//operate row
			if(in[0]=='r')
			{
				sscanf(in,"%[a-z,A-Z] %ld %ld",&com,&a,&b);
				for(i=1;i<=size;i++)
				{
					temp=arr[a][i];
					arr[a][i]=arr[b][i];
					arr[b][i]=temp;
				}
			}
			//operate column
			else if(in[0]=='c')
			{
				sscanf(in,"%[a-z,A-Z] %ld %ld",&com,&a,&b);
				for(i=1;i<=size;i++)
				{
					temp=arr[i][a];
					arr[i][a]=arr[i][b];
					arr[i][b]=temp;
				}
			}
			//operate inc
			else if(in[0]=='i')
			{
				for(i=1;i<=size;i++)
				{
					for(j=1;j<=size;j++)
					{
						arr[i][j]++;
						if(arr[i][j]==10) arr[i][j]=0;
					}
				}
			}
			//operate dec
			else if(in[0]=='d')
			{
				for(i=1;i<=size;i++)
				{
					for(j=1;j<=size;j++)
					{
						arr[i][j]--;
						if(arr[i][j]==-1) arr[i][j]=9;
					}
				}
			}
			//ooperate transpose
			else if(in[0]=='t')
			{
				for(i=1;i<=size;i++)
				{
					for(j=i;j<=size;j++)
					{
						temp=arr[i][j];
						arr[i][j]=arr[j][i];
						arr[j][i]=temp;
					}
				}
			}
		}

		//output
		printf("Case #%ld\n",c);
		for(i=1;i<=size;i++)
		{
			for(j=1;j<=size;j++)
			{
				printf("%ld",arr[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
