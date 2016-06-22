//Substitution Cypher (#865)
//Sadeq

#include<stdio.h>
#include<string.h>

char in[1000];
char t1[1000];
char t2[1000];

int main()
{
	int i,len,j;
	int len1;
	int tag;
	int cas,c;
	char dm[5];

	scanf("%d",&cas);gets(dm);
	gets(dm);
	for(c=1;c<=cas;c++)
	{
		if(c>1) printf("\n");
		gets(t1);
		gets(t2);
		printf("%s\n",t2);
		printf("%s\n",t1);
		len1=strlen(t1);

		while(gets(in))
		{
			len=strlen(in);
			if(len==0) break;

			for(i=0;i<len;i++)
			{
				tag=0;
				for(j=0;j<len1;j++)
				{
					if(in[i]==t1[j])
					{
						printf("%c",t2[j]);
						tag=1;
						break;
					}
				}
				if(tag==0) printf("%c",in[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
