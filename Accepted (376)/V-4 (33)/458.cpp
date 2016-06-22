//The Decoder (#458)
//Sadeq

#include<stdio.h>
#include<string.h>

#define X 10001

int main()
{
	char ch[X];
	while(scanf("%s",ch)!=EOF)
	{
		int len=strlen(ch);
		for(int i=0;i<len;i++)
		{
			printf("%c",ch[i]-7);
		}
		printf("\n");
	}
	return 0;
}