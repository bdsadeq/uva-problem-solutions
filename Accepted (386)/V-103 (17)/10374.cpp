//Election (#10374)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char name[30][100];
	char team[30][100];
	char temp[100];

	long vote[30];
	char dm[5];
	long a,b,max;
	long i,j,count;
	long cas,c;
	long line=0;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld",&a);
		gets(dm);

		//take input
		for(i=0;i<a;i++)
		{
			gets(name[i]);
			gets(team[i]);
		}

		//set all to zero
		for(i=0;i<a;i++) vote[i]=0;


		scanf("%ld",&b);gets(dm);
		//take vote
		for(i=0;i<b;i++)
		{
			gets(temp);
			for(j=0;j<a;j++)
			{
				if(strcmp(temp,name[j])==0) vote[j]++;
			}
		}

		max=0;
		for(i=0;i<a;i++)
		{
			if(vote[i]>max) max=vote[i];
		}

		count=0;
		for(i=0;i<a;i++)
		{
			if(vote[i]==max) count++;
		}

		if(line==1) printf("\n");
		line=1;
		if(count==1)
		{
			for(i=0;i<a;i++)
			{
				if(vote[i]==max) 
				{
					printf("%s\n",team[i]);
					break;
				}
			}
		}
		else printf("tie\n");
	}
	return 0;
}
