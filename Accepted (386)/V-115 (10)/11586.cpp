//Train Tracks (#11586)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	long cas,c;
	long len,i;
	long countm,countf;
	char in[1000],dm[5];

	scanf("%ld",&cas);gets(dm);
	for(c=1;c<=cas;c++)
	{
		gets(in);
		len=strlen(in);

		countm=0;
		countf=0;
		for(i=0;i<len;i++)
		{
			if(in[i]=='M') countm++;
			else if(in[i]=='F') countf++;
		}

		if(countm>1 && countm==countf) printf("LOOP\n");
		else printf("NO LOOP\n");
	}

	return 0;
}
