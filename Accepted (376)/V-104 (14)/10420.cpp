//List of Conquests (#10420)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int com(const void *a,const void *b);

char country[3000][100],rest[100];

int main()
{
	char dm[5];
	long cas,c;
	long val;
	scanf("%ld",&cas);gets(dm);

	//take input
	for(c=0;c<cas;c++)
	{
		scanf(" %s",&country[c]);
		gets(rest);
	}

	//sort
	qsort(country,cas,sizeof(country[0]),com);

	//output
	val=1;
	for(c=0;c<cas;c++)
	{
		if(strcmp(country[c],country[c+1])!=0)
		{
			printf("%s %ld\n",country[c],val);
			val=1;
		}
		else val++;
	}
	return 0;
}

int com(const void *a,const void *b)
{
	return (strcmp((char *)a, (char *)b));
}
