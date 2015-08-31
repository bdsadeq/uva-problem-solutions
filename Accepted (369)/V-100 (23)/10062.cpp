//Tell me the frequencies! (#10062)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char in[1200];
	char asc[128];
	int out[128];
	int len;
	int i,j,max;
	int line=0;
	//initialize all ascii to character
	for(i=1;i<128;i++) asc[i]=i;
	//taking input
	while(gets(in))
	{
		if(line==1) printf("\n");
		//all to zero
		for(i=0;i<128;i++) out[i]=0;
		len=strlen(in);
		//check
		for(i=0;i<len;i++)
		{
			for(j=1;j<128;j++)
			{
				if(in[i]==asc[j]) out[j]++;
			}
		}
		//find maximum
		max=0;
		for(i=0;i<128;i++)
		{
			if(out[i]>max) max=out[i];
		}
		//output
		for(i=1;i<=max;i++)
		{
			for(j=127;j>=1;j--)
			{
				if(i==out[j]) printf("%d %d\n",asc[j],out[j]);
			}
		}
		line=1;
	}
	return 0;
}