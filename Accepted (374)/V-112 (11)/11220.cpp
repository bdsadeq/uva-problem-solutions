//Decoding the message (#11220)
//Sadeq

#include<stdio.h>
#include<string.h>

char in[10000];

int main()
{
	char temp[1000],dm[5];
	int bs,dbs,count;
	int cas,c;
	scanf("%d",&cas);gets(dm);
	for(c=0;c<=cas;c++)
	{
		//for blank line
		if(c>1) printf("\n");

		if(c>0) printf("Case #%d:\n",c);
		while(gets(in))
		{
			if((strlen(in))==0) break;
			count=0;
			bs=dbs=0;
			while(sscanf(in+bs,"%s%n",&temp,&dbs)==1)
			{
				if(strlen(temp)>count)
				{
					printf("%c",temp[count]);
					count++;
				}
				bs=bs+dbs;
			}
			printf("\n");
		}
	}
	return 0;
}
