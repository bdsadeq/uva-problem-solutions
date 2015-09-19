//Flowers Flourish from France (#12243)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char inp[2000];
	int len;
	int i;
	char base;
	char ans;

	while(gets(inp))
	{
		if(strcmp(inp,"*")==0) break;
		len=strlen(inp);

		ans='Y';

		base=toupper(inp[0]);

		for(i=1;i<len-1;i++)
		{
			if(inp[i]==' ')
			{
				if(base!=toupper(inp[i+1])) ans='N';
			}
		}

		printf("%c\n",ans);
	}

	return 0;
}
