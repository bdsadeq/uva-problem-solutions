//Common permutation (#10252)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char word1[1100],word2[1100];
	int b1[200],b2[200],min[200];
	int len1,len2;
	int i,j;

	while(gets(word1),gets(word2))
	{
		len1=strlen(word1);
		len2=strlen(word2);
		
		//initialize all to zero
		for(i=0;i<200;i++)
		{
			b1[i]=0;
			b2[i]=0;
			min[i]=0;
		}

		//count b1
		for(i=0;i<len1;i++) b1[word1[i]]++;

		//count b2
		for(i=0;i<len2;i++) b2[word2[i]]++;

		//find min
		for(i=0;i<200;i++)
		{
			min[i]=b1[i];
			if(b2[i]<b1[i]) min[i]=b2[i];
		}

		//output
		for(i=0;i<200;i++)
		{
			for(j=1;j<=min[i];j++)
			{
				if(min[i]>0) printf("%c",i);
			}
		}
		printf("\n");
	}
	return 0;
}
