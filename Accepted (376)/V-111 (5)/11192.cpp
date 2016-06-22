//Group Reverse (#11192)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	int g,len;
	char in[200];
	int i,j;

	while(scanf("%d",&g))
	{
		if(g==0) break;
		scanf("%s",&in);
		len=strlen(in);
		g=len/g;
		for(i=1;i<=len/g;i++)
		{
			for(j=(i*g)-1;j>=(i-1)*g;j--)
			{
				printf("%c",in[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
