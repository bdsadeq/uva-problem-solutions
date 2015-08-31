//Lotto (#441)
//Sadeq

#include<stdio.h>

int main()
{
	int in[20];
	int k,i;
	int a,b,c,d,e,f;
	int line=0;
	while(scanf("%d",&k))
	{
		if(k==0) break;
		for(i=1;i<=k;i++)
		{
			scanf("%d",&in[i]);
		}

		if(line!=0) printf("\n");
		line=1;
		for(a=1;a<=k-5;a++)
		{
			for(b=a+1;b<=k-4;b++)
			{
				for(c=b+1;c<=k-3;c++)
				{
					for(d=c+1;d<=k-2;d++)
					{
						for(e=d+1;e<=k-1;e++)
						{
							for(f=e+1;f<=k;f++)
							{
								printf("%d %d %d %d %d %d\n",in[a],in[b],in[c],in[d],in[e],in[f]);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}



