//Free Spots (#10703)
//Sadeq

#include<stdio.h>

bool arr[550][550];

int main()
{
	long w,h,n;
	long x1,x2,y1,y2;
	long i,j,k;
	long count;
	while(1)
	{
		scanf("%ld %ld %ld",&w,&h,&n);
		if(w==0 && h==0 && n==0) break;
		
		//initially all to zero
		for(i=1;i<=w;i++)
		{
			for(j=1;j<=h;j++)
			{
				arr[i][j]=false;
			}
		}

		//computing number of sub-boards
		for(k=1;k<=n;k++)
		{
			scanf("%ld %ld %ld %ld",&x1,&y1,&x2,&y2);
			
			//there are four conditions
			//1. x2 is greater or equal than x1
			//2. x1 is greater than x2
			//1. y2 is greater or equal than y1
			//2. y1 is greater than y2
			//loop increment or decrement is depend on this
			if(x2>=x1)
			{
				for(i=x1;i<=x2;i++)
				{
					if(y2>=y1)
					{
						for(j=y1;j<=y2;j++)
						{
							arr[i][j]=true;
						}
					}
					else if(y1>y2)
					{
						for(j=y1;j>=y2;j--)
						{
							arr[i][j]=true;
						}
					}
				}
			}
			else if(x1>x2)
			{
				for(i=x1;i>=x2;i--)
				{
					if(y2>=y1)
					{
						for(j=y1;j<=y2;j++)
						{
							arr[i][j]=true;
						}
					}
					else if(y1>y2)
					{
						for(j=y1;j>=y2;j--)
						{
							arr[i][j]=true;
						}
					}
				}
			}



		}

		//counting free spots
		count=0;
		for(i=1;i<=w;i++)
		{
			for(j=1;j<=h;j++)
			{
				if(arr[i][j]==0) count++;
			}
		}

		//output
		if(count==0) printf("There is no empty spots.\n");
		else if(count==1) printf("There is one empty spot.\n");
		else printf("There are %ld empty spots.\n",count);
	}
	return 0;
}