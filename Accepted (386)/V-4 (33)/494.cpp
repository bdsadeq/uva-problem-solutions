//Kindergarten Counting Game (#494)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<ctype.h>

char in[100000],part[100000];

int main()
{
	int bs,dbs;
	int i,len,word;
	int found;
	while(gets(in))
	{
		bs=0;
		dbs=0;
		word=0;
		len=strlen(in);

		//remove punctuation
		for(i=0;i<len;i++)
		{
			if(!isalpha(in[i]))
			{
				in[i]=' ';
			}
		}

		//tokeniz
		while(sscanf(in+bs,"%s%n",&part,&dbs)==1)
		{
			found=0;
			len=strlen(part);
			//check for number
			for(i=0;i<len;i++)
			{
				if(isalpha(part[i]))
				{
					found=1;
					break;
				}
			}
			if(found==1) word++;
			bs=bs+dbs;
		}
		printf("%d\n",word);
	}
	return 0;
}
