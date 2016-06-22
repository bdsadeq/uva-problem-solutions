//What's Cryptanalysis? (#10008)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	int i,a,b,temp,j;
	int cas,len;
	char in[1000][1000];
	int out[37];
	char ch1[]="n1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ch2[]="n1234567890abcdefghijklmnopqrstuvwxyz";
	char dum[1];

	//set all to zero
	for(i=0;i<=36;i++) out[i]=0;

	//take input
	scanf("%d",&cas);
	gets(dum);
	for(i=1;i<=cas;i++)
	{
		gets(in[i]);
		len=strlen(in[i]);
		for(a=0;a<len;a++)
		{
			//checking and count
			for(b=1;b<=36;b++)
			{
				if(in[i][a]==ch1[b] || in[i][a]==ch2[b]) out[b]++;
			}
		}
	}

	//find maximum
	temp=0;
	for(i=1;i<=36;i++)
	{
		if(temp<out[i]) temp=out[i];
	}
	
	//output
	for(i=temp;i>=1;i--)
	{
		for(j=11;j<=36;j++)
		{
			if(out[j]==i) printf("%c %d\n",ch1[j],i);
		}
	}
	return 0;
}