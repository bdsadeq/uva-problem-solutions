//Haiku Review (#576)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);
	char in[500];
	long haiku,i,len;
	long syl[3];

	while(gets(in))
	{
		if(strcmp(in,"e/o/i")==0) break;

		//check haiku is ok or not
		//count '/'
		//count syllable of every line
		haiku=0;
		syl[0]=0;
		syl[1]=0;
		syl[2]=0;
		len=strlen(in);
		for(i=0;i<len;i++)
		{
			if(in[i]=='a' || in[i]=='e' || in[i]=='i' || in[i]=='o' || in[i]=='u' || in[i]=='y')
			{
				if(!(in[i+1]=='a' || in[i+1]=='e' || in[i+1]=='i' || in[i+1]=='o' || in[i+1]=='u' || in[i+1]=='y'))
				{
					syl[haiku]++;
				}
			}
			if(in[i]=='/') haiku++;
		}

		//test
		//printf("%ld %ld %ld\n",syl[0],syl[1],syl[2]);

		if(haiku==2)
		{
			if(syl[0]!=5) printf("1\n");
			else if(syl[1]!=7) printf("2\n");
			else if(syl[2]!=5) printf("3\n");
			else printf("Y\n");
		}
		else
		{
			if(syl[0]!=5) printf("1\n");
			else if(syl[1]!=7) printf("2\n");
			else if(syl[2]!=5) printf("3\n");
		}
	}

	return 0;
}
