//Letter Frequency (#11577)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	//freopen("in.txt","r",stdin);
	char in[1000],dm[5];
	long txt[200];
	long cas,c;
	long len,i,max;

	scanf("%ld",&cas);gets(dm);
	for(c=1;c<=cas;c++)
	{
		gets(in);

		for(i=0;i<200;i++) txt[i]=0;
		max=0;

		len=strlen(in);
		for(i=0;i<len;i++)
		{
			if(isalpha(in[i]))
			{
				txt[tolower(in[i])]++;
				if((txt[tolower(in[i])])>max) max=txt[tolower(in[i])];
			}
		}

		for(i='a';i<='z';i++)
		{
			if(txt[i]==max) printf("%c",i);
		}
		printf("\n");
	}
	return 0;
}
