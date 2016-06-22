//TeX Quotes (#272)
//Sadeq

#include<stdio.h>
#include<string.h>

#define x 10001

int main()
{
	char ch[x];
	int f=0;
	while(gets(ch))
	{
		int len=strlen(ch);
		for(int i=0;i<len;i++)
		{
			if(ch[i]==' ') printf(" ");
			else if(ch[i]=='"' && f%2==0)
			{
				printf("``");
				f++;
			}
			else if(ch[i]=='"' && f%2==1)
			{
				printf("''");
				f++;
			}
			else printf("%c",ch[i]);
		}
		printf("\n");
	}
	return 0;
}