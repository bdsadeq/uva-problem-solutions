//Jingle Composing (#11295)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char inp[1000];
	double score[300];

	//create score 
	score['W']=1.0;
	score['H']=1/2.0;
	score['Q']=1/4.0;
	score['E']=1/8.0;
	score['S']=1/16.0;
	score['T']=1/32.0;
	score['X']=1/64.0;

	long ans,len,i;
	double sum;
	while(gets(inp))
	{
		if(strcmp(inp,"*")==0) break;
		ans=0;

		len=strlen(inp);
		sum=0;
		for(i=1;i<len;i++)
		{
			if(inp[i]!='/')
			{
				sum=sum+score[inp[i]];
				//printf("%lf ",score['X']);
			}
			if(inp[i]=='/')
			{
				if(sum==1) ans++;
				sum=0;
			}

			//printf("%c ",inp[i]);
			//printf("%lf\n",sum);
		}

		printf("%ld\n",ans);

	}

	return 0;
}
