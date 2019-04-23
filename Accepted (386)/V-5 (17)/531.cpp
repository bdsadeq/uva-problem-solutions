//Compromise (#531)
//Sadeq

#include<stdio.h>
#include<string.h>

#define cross 1
#define up 2
#define left 3

void print_lcs(int i,int j);
char in[4000],in1[200][50],in2[200][50];
int c[200][200],b[200][200];
int space;

int main()
{
	int bs,dbs,i,j;
	int len1,len2;
	while(gets(in))
	{
		i=0;
		bs=dbs=0;
		while(sscanf(in+bs,"%s%n",&in1[i],&dbs)==1)
		{
			i++;
			bs=bs+dbs;
		}
		while(gets(in))
		{
			if(in[0]=='#') break;
			bs=dbs=0;
			while(sscanf(in+bs,"%s%n",&in1[i],&dbs)==1)
			{
				i++;
				bs=bs+dbs;
			}
		}

		//enter 2nd text
		j=0;
		while(gets(in))
		{
			if(in[0]=='#') break;
			bs=dbs=0;
			while(sscanf(in+bs,"%s%n",&in2[j],&dbs)==1)
			{
				j++;
				bs=bs+dbs;
			}
		}

		len1=i;
		len2=j;

		//LCS length
		for(i=0;i<=len1;i++) c[i][0]=0;
		for(j=0;j<=len2;j++) c[0][j]=0;

		for(i=1;i<=len1;i++)
		{
			for(j=1;j<=len2;j++)
			{
				if((strcmp(in1[i-1],in2[j-1]))==0) 
				{
					c[i][j]=c[i-1][j-1]+1;
					b[i][j]=cross;
				}
				else if(c[i-1][j]>=c[i][j-1])
				{
					c[i][j]=c[i-1][j];
					b[i][j]=up;
				}
				else 
				{
					c[i][j]=c[i][j-1];
					b[i][j]=left;
				}
			}
		}

		space=0;
		print_lcs(len1,len2);
		printf("\n");
	}
	return 0;
}

void print_lcs(int i,int j)
{
	if(i==0 || j==0) return;
	if(b[i][j]==cross)
	{
		print_lcs(i-1,j-1);
		if(space==1) printf(" ");
		space=1;
		printf("%s",in1[i-1]);
	}
	else if(b[i][j]==up) print_lcs(i-1,j);
	else print_lcs(i,j-1);
}
