//Longest Match (#10100)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<ctype.h>

char in[2000];
char in1[1100][1100],in2[1100][1100];
int c[1100][1100];

int main()
{
	int i,j;
	int c1,c2;
	int len1,len2,len;
	int bs,dbs;
	int count=0;

	while(gets(in))
	{
		count++;
		//fill with space
		len=strlen(in);
		for(i=0;i<len;i++)
		{
			if(!isalnum(in[i])) in[i]=' ';
		}

		//tokenize 1st sentence
		c1=0;
		bs=dbs=0;
		while(sscanf(in+bs,"%s%n",&in1[c1],&dbs)==1)
		{
			c1++;
			bs=bs+dbs;
		}

		gets(in);
		//fill with space
		len=strlen(in);
		for(i=0;i<len;i++)
		{
			if(!isalnum(in[i])) in[i]=' ';
		}

		//tokenize 2nd sentence
		c2=0;
		bs=dbs=0;
		while(sscanf(in+bs,"%s%n",&in2[c2],&dbs)==1)
		{
			c2++;
			bs=bs+dbs;
		}

		len1=c1;
		len2=c2;

		//LCS length
		for(i=0;i<=len1;i++) c[i][0]=0;
		for(j=0;j<=len2;j++) c[0][j]=0;

		for(i=1;i<=len1;i++)
		{
			for(j=1;j<=len2;j++)
			{
				if((strcmp(in1[i-1],in2[j-1]))==0) c[i][j]=c[i-1][j-1]+1;
				//if(in1[i-1]==in2[j-1]) c[i][j]=c[i-1][j-1]+1;
				else if(c[i-1][j]>=c[i][j-1]) c[i][j]=c[i-1][j];
				else c[i][j]=c[i][j-1];
			}
		}

		//output
		if(c[len1][len2]==0) printf("%2d. Blank!\n",count);
		else printf("%2d. Length of longest match: %d\n",count,c[len1][len2]);
	}
	return 0;
}
