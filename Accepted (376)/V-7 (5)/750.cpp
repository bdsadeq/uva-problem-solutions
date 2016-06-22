//8 Queens Chess Problem (#750)
//Sadeq

#include<stdio.h>
#include<stdlib.h>

bool place(int k,int i);
void nqueens(int k,int n);
int x[10];
int a,b,count;

int main()
{
	int cas,c;
	int line=0;
	scanf("%d",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%d %d",&a,&b);

		if(line==1) printf("\n");
		line=1;

		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n");
		printf("\n");

		count=0;
		nqueens(1,8);
	}
	return 0;
}

bool place(int k,int i)
{
	int j,temp1,temp2;
	for(j=1;j<=k-1;j++)
	{
		temp1=abs(x[j]-i);
		temp2=abs(j-k);
		if((x[j]==i) || (temp1==temp2)) return 0;
	}
	return 1;
}

void nqueens(int k,int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		if(place(k,i)==1)
		{
			x[k]=i;
			if(k==n && x[b]==a)
			{
				count++;
				printf("%2d     ",count);
				for(j=1;j<=n;j++)
				{
					printf(" %d",x[j]);
				}
				printf("\n");
			}
			else nqueens(k+1,n);
		}
	}
}
