//Word Scramble (#483)
//Sadeq

#include<stdio.h>
#include<string.h>

char in[1000000],part[1000000];

int main()
{
	long bs,dbs,len,i;
	while(gets(in))
	{
		bs=dbs=0;
		while(sscanf(in+bs,"%s%n",&part,&dbs)==1)
		{
			if(bs>0) printf(" ");
			len=strlen(part);
			for(i=len-1;i>=0;i--)
			{
				printf("%c",part[i]);
			}			
			bs+=dbs;
		}
		printf("\n");
	}
	return 0;
}
