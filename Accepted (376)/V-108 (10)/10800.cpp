//Not that kind of graph (#10800)
//Sadeq

#include<stdio.h>
#include<string.h>

#define max 150

int main()
{
	int i,j,k,len,cas,x;
	int a,b,temp,tag;
	int mx,mn;
	char gr[max][max];
	char in[max];
	char dm[5];

	scanf("%d",&cas);
	gets(dm);

	for(x=1;x<=cas;x++)
	{
		gets(in);
		printf("Case #%d:\n",x);
		len=strlen(in);

		//initialize graph to null
		for(i=0;i<max;i++)
		{
			for(j=0;j<max;j++)
			{
				gr[i][j]='0';
			}
		}

		i=max/2;
		j=0;
		mx=i;
		mn=i;
		//create graph
		for(k=0;k<len;k++)
		{
			if(k==0)
			{
				if(in[k]=='C') gr[i][j]='_';
				if(in[k]=='R') gr[i][j]='/';
				if(in[k]=='F') gr[i][j]=92;
			}
			else
			{
				//check for C
				if(in[k-1]=='R' && in[k]=='C')
				{
					i--;
					j++;
					gr[i][j]='_';
				}
				else if(in[k-1]=='F' && in[k]=='C')
				{
					j++;
					gr[i][j]='_';
				}
				else if(in[k-1]=='C' && in[k]=='C')
				{
					j++;
					gr[i][j]='_';
				}

				//check for R
				else if(in[k-1]=='R' && in[k]=='R')
				{
					i--;
					j++;
					gr[i][j]='/';
				}
				else if(in[k-1]=='F' && in[k]=='R')
				{
					j++;
					gr[i][j]='/';
				}
				else if(in[k-1]=='C' && in[k]=='R')
				{
					j++;
					gr[i][j]='/';
				}

				//check for F
				else if(in[k-1]=='R' && in[k]=='F')
				{
					j++;
					gr[i][j]=92;
				}
				else if(in[k-1]=='F' && in[k]=='F')
				{
					i++;
					j++;
					gr[i][j]=92;
				}
				else if(in[k-1]=='C' && in[k]=='F')
				{
					i++;
					j++;
					gr[i][j]=92;
				}
				if(i<mn) mn=i;
				if(i>mx) mx=i;
			}
		}

		//output
		for(a=mn;a<mx+1;a++)
		{
			printf("| ");
			for(b=0;b<=j;b++)
			{
				tag=0;
				for(temp=b;temp<=j;temp++)
				{
					if(gr[a][temp]=='/' || gr[a][temp]==92 || gr[a][temp]=='_')
					{
						tag=1;
						break;
					}
				}
				if(tag==0) break;
				if(gr[a][b]=='0') printf(" ");
				else printf("%c",gr[a][b]);
			}
			printf("\n");
		}
		for(a=-1;a<=j+2;a++)
		{
			if(a==-1) printf("+");
			else printf("-");
		}
		printf("\n\n");
	}
	return 0;
}
