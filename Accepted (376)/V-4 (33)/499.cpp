//What's the frequency, kenneth? (#499)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char in[100000];
	char ch[]="0ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	long a[53];
	long i,j,max,len;
	while(gets(in))
	{
		//intialize all 0
		for(i=1;i<=52;i++) a[i]=0;
		len=strlen(in);
		//check all character
		for(i=0;i<len;i++)
		{
			for(j=1;j<=52;j++)
			{
				if(in[i]==ch[j]) a[j]++;
			}
		}
		//find maximum value
		max=0;
		for(i=1;i<=52;i++)
		{
			if(a[i]>max) max=a[i];
		}
		//print output
		for(i=1;i<=52;i++)
		{
			if(a[i]==max) printf("%c",ch[i]);
		}
		printf(" %ld\n",max);
	}
	return 0;
}