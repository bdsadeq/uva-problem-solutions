//Hay Points (#10295)
//Sadeq

#include<stdio.h>
#include<string.h>

int compare(char a[],char b[]);

char word[1200][1000];
long sal[1200];
char line[10000];
char test[1000];

int main()
{
	long i,j;
	long w,jb;
	long sum;
	long t;
	char dm[5];

	int bs,dbs;
	while(scanf("%ld %ld",&w,&jb)==2)
	{
		gets(dm);

		//take the words
		for(i=0;i<w;i++)
		{
			scanf(" %s %d",&word[i],&sal[i]);
		}

		//input the line
		for(i=1;i<=jb;i++)
		{
			sum=0;
			while(gets(line))
			{
				if(line[0]=='.') break;
				bs=dbs=0;
				while(sscanf(line+bs,"%s%n",&test,&dbs)==1)
				{
					//check the string
					for(j=0;j<w;j++)
					{
						t=compare(test,word[j]);
						if(t==0)
						{
							sum=sum+sal[j];
							break;
						}
					}
					bs=bs+dbs;
				}
			}
			printf("%ld\n",sum);
		}
	}
	return 0;
}

int compare(char a[],char b[])
{
	return (strcmp(a,b));
}
