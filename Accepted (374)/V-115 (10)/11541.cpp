//Decoding (#11541)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char dm[5];
	char ch;
	long num;
	long j;
	long cas,c;

	scanf("%ld",&cas);gets(dm);

	for(c=1;c<=cas;c++)
	{
		printf("Case %ld: ",c);
		while(1)
		{
			scanf("%c",&ch);
			if(ch=='\n') break;
			scanf("%ld",&num);
			for(j=0;j<num;j++)
			{
				printf("%c",ch);
			}

		}
		printf("\n");
	}

	/*
	for(c=1;c<=cas;c++)
	{
		gets(in);
		len=strlen(in);
		
		printf("Case %ld: ",c);
		for(i=0;i<len;i=i+2)
		{
			for(j=0;j<(in[i+1]-'0');j++)
			{
				printf("%c",in[i]);
			}
		}
		printf("\n");
	}
	*/

	return 0;
}