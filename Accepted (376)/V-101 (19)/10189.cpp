//Minesweeper (#10189)
//Sadeq

#include<stdio.h>

int main()
{
	char set[101][101];
	int m,n;
	int i,j;
	int count,line=0,cas=0;
	while(scanf("%d %d",&m,&n))
	{
		if(m==0 && n==0) break;

		for(i=0;i<=100;i++)
		{
			for(j=0;j<=100;j++)
			{
				set[i][j]='.';
			}
		}

		cas++;
		for(i=0;i<m;i++)
		{
			scanf("%s",set[i]);
		}
		if(line!=0) printf("\n");
		printf("Field #%d:\n",cas);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				count=0;
				if(set[i][j]=='*') printf("*");
				else
				{
					if(set[i-1][j-1]=='*') count++;
					if(set[i-1][j]=='*') count++;
					if(set[i-1][j+1]=='*') count++;
					
					if(set[i][j-1]=='*') count++;
					if(set[i][j+1]=='*') count++;

					if(set[i+1][j-1]=='*') count++;
					if(set[i+1][j]=='*') count++;
					if(set[i+1][j+1]=='*') count++;
					printf("%c",count+'0');
				}
			}
			printf("\n");
		}
		line=1;
	}
	return 0;
}