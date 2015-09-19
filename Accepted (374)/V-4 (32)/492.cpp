//Pig-Latin (#492)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<ctype.h>

char text[100000];

int main()
{
	//freopen("in.txt","r",stdin);
	char ch;
	long i=0,len,j;

	while((ch=getchar())!=EOF)
	{
		if(isalpha(ch))
		{
			text[i]=ch;
			i++;
		}
		else
		{
			text[i]='\0';
			if(i>0)
			{
				len=strlen(text);
				if(text[0]=='a' || text[0]=='e' || text[0]=='i' || text[0]=='o' || text[0]=='u' ||
					text[0]=='A' || text[0]=='E' || text[0]=='I' || text[0]=='O' || text[0]=='U')
				{
					printf("%say",text);
				}
				else
				{
					for(j=1;j<len;j++) printf("%c",text[j]);
					printf("%cay",text[0]);
				}
				
			}
			printf("%c",ch);
			i=0;
		}
	}
	return 0;
}
