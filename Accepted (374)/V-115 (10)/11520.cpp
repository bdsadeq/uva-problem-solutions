//Fill the Square (#11520)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	//freopen("in.txt","r",stdin);
	char in[20][20],dm[5];
	char al[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;
	int cas,c,i,j,k;

	//input
	scanf("%d",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%d",&n);gets(dm);
		for(i=0;i<n;i++)
		{
			gets(in[i]);
		}

		//processing
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(in[i][j]=='.')
				{
					for(k=0;k<26;k++)
					{
						if(in[i-1][j]==al[k]) continue;
						else if(in[i][j-1]==al[k]) continue;
						else if(in[i+1][j]==al[k]) continue;
						else if(in[i][j+1]==al[k]) continue;
						else
						{
							in[i][j]=al[k];
							break;
						}
					}
				}
			}
		}

		//output
		printf("Case %d:\n",c);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%c",in[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}
