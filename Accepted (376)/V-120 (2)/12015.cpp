//Google is Feeling Lucky (#12015)
//Sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);

	long cas,cc;
	long i;
	char url[20][200];
	long val[20];
	long max;

	scanf("%ld",&cas);

	for(cc=1;cc<=cas;cc++)
	{
		max=0;
		for(i=0;i<10;i++)
		{
			scanf(" %s %ld",&url[i],&val[i]);
			if(val[i]>max) max=val[i];
		}

		printf("Case #%ld:\n",cc);

		for(i=0;i<10;i++)
		{
			if(val[i]==max)
			{
				printf("%s\n",url[i]);
			}
		}
	}
	return 0;
}
