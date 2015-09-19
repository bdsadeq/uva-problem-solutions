//Error Correction (#541)
//Sadeq

#include<stdio.h>

int main()
{
	int matrix[200][200],n,tag1,tag2,i,j,row,col,sum,t;
	while(scanf("%d",&n))
	{
		if(n==0) break;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%d",&t);
				matrix[i][j]=t;
			}
		}

		tag1=0;
		tag2=0;
		for(i=1;i<=n;i++)
		{
			sum=0;
			for(j=1;j<=n;j++)
			{
				sum=sum+matrix[i][j];
			}
			if(sum%2!=0)
			{
				row=i;
				tag1++;
			}
		}

		for(i=1;i<=n;i++)
		{
			sum=0;
			for(j=1;j<=n;j++)
			{
				sum=sum+matrix[j][i];
			}
			if(sum%2!=0)
			{
				col=i;
				tag2++;
			}
		}

		if(tag1==0 && tag2==0) printf("OK\n");
		if(tag1==1 && tag2==1) printf("Change bit (%d,%d)\n",row,col);
		if(tag1>1 || tag2>1) printf("Corrupt\n");
	}
	return 0;
}