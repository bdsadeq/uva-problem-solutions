//Newspaper (#11340)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	long long cas,c;

	long long v,val[200];
	long long i;
	char ch[200];

	long long line,x,y,len;
	char in[12000];

	char dm[5];
	long long sum;
	double final;

	scanf("%lld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%lld",&v);
		for(i=0;i<v;i++)
		{
			scanf(" %c %lld",&ch[i],&val[i]);
		}

		//enter the text
		sum=0;
		scanf("%lld",&line);gets(dm);
		for(i=0;i<line;i++)
		{
			gets(in);
			//calculate the value
			len=strlen(in);
			for(x=0;x<len;x++)
			{
				for(y=0;y<v;y++)
				{
					if(in[x]==ch[y])
					{
						sum=sum+val[y];
						break;
					}
				}
			}
		}

		final=(double)sum;
		//output
		printf("%.2lf$\n",final/100);
	}
	return 0;
}
