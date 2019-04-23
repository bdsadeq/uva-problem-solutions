//Longest common subsequence (#10405)
//Sadeq
//DP (LCS)

#include<stdio.h>
#include<string.h>

char in1[1100],in2[1100];
int c[1100][1100];

int main()
{
	int i,j;
	int len1,len2;

	while(gets(in1),gets(in2))
	{
		len1=strlen(in1);
		len2=strlen(in2);

		//LCS length
		for(i=0;i<=len1;i++) c[i][0]=0;
		for(j=0;j<=len2;j++) c[0][j]=0;

		for(i=1;i<=len1;i++)
		{
			for(j=1;j<=len2;j++)
			{
				if(in1[i-1]==in2[j-1]) c[i][j]=c[i-1][j-1]+1;
				else if(c[i-1][j]>=c[i][j-1]) c[i][j]=c[i-1][j];
				else c[i][j]=c[i][j-1];
			}
		}
		printf("%d\n",c[len1][len2]);
	}
	return 0;
}
