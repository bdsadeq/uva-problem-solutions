//Finding Rectangles (#638)
//Sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);

	long n,i,j,k,l;
	long x[30],y[30];
	char in[30][5];
	long count=0;
	long line;
	long flag;

	while(scanf("%ld",&n))
	{
		if(n==0) break;
		count++;

		//take input
		for(i=0;i<n;i++)
		{
			scanf("%s %ld %ld",&in[i],&x[i],&y[i]);
		}

		printf("Point set %ld:",count);

		//calculating
		line=0;
		flag=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(x[i]<x[j] && y[i]==y[j])
				{
					for(k=0;k<n;k++)
					{
						if(x[j]==x[k] && y[j]>y[k])
						{
							for(l=0;l<n;l++)
							{
								if(x[i]==x[l] && y[k]==y[l])
								{
									if(line==0) printf("\n");
									line++;
									if(line==10) line=0;
									flag=1;

									printf(" %s%s%s%s",in[i],in[j],in[k],in[l]);
								}
							}
						}
					}
				}
			}
		}
		if(flag==0) printf(" No rectangles");

		printf("\n");
	}

	return 0;
}
