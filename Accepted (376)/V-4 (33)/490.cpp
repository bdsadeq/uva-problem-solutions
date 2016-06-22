//Rotating Sentences (#490)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char in[200][200];
	int i=0;
	int j,k;
	int len[200];
	int max=0;

	//taking input
	while(gets(in[i]))
	{
		len[i]=strlen(in[i]);
		if(len[i]>max) max=len[i];
		i++;
	}

	//display output
	for(j=0;j<max;j++)
	{
		for(k=i-1;k>=0;k--)
		{
			if(j>=len[k]) printf(" ");
			else printf("%c",in[k][j]);
		}
		printf("\n");
	}
	return 0;
}
