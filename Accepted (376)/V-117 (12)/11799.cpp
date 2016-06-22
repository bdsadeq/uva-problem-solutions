//Horror Dash #11799
//sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);

	long cas,cc;
	long inp[10010];
	long temp;
	long max;
	char *pch;

	char str[1000000];


	scanf("%ld",&cas);
	gets(str);

	for(cc=1;cc<=cas;cc++)
	{
		max=0;

		gets(str);

		pch = strtok (str," ");
		//sscanf(pch,"%ld",&temp);
		//if(temp>max) max=temp;
		while (pch != NULL)
		{
			//printf ("%s\n",pch);
			sscanf(pch,"%ld",&temp);
			if(temp>max) max=temp;
			pch = strtok (NULL, " ");
		}

		printf("Case %ld: %ld\n",cc,max);

	}

	return 0;
}