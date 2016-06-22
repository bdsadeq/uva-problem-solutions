//Mother bear (#10945)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char in[1000],con[1000];
	int i,j,count;
	int len,pal;
	while(gets(in))
	{
		len=strlen(in);
		if(len==4 && in[0]=='D' && in[1]=='O' && in[2]=='N' && in[3]=='E') break;
		
		//convert to another
		count=0;
		for(i=0;i<len;i++)
		{
			if((in[i]>='a' && in[i]<='z') || (in[i]>='A' && in[i]<='Z'))
			{
				con[count]=tolower(in[i]);
				count++;
			}
		}

		//test palindrome
		pal=1;
		for(i=0,j=count-1;i<count;i++,j--)
		{
			if(con[i]!=con[j])
			{
				pal=0;
				break;
			}
		}

		//output
		if(pal==1) printf("You won't be eaten!\n");
		if(pal==0) printf("Uh oh..\n");
	}
	return 0;
}
