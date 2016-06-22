//Vacation (#10192)
//Sadeq
//DP (LCS)

#include<stdio.h>
#include<string.h>

int main()
{
	char in1[200],in2[200];
	int i,j,cas=0;
	int c[200][200];
	int len1,len2;

	while(1)
	{
		gets(in1);
		if(in1[0]=='#') break;
		gets(in2);
		cas++;

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
		printf("Case #%d: you can visit at most %d cities.\n",cas,c[len1][len2]);
	}
	return 0;
}
