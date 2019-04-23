//Soundex (#10260)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char in[25];
	int code[25],len;
	int i;
	while(gets(in))
	{
		len=strlen(in);
		for(i=0;i<len;i++)
		{
			if(in[i]=='B' || in[i]=='F' || in[i]=='P' || in[i]=='V') code[i]=1;
			else if(in[i]=='C' || in[i]=='G' || in[i]=='J' || in[i]=='K' || in[i]=='Q' ||
				in[i]=='S' || in[i]=='X' || in[i]=='Z') code[i]=2;
			else if(in[i]=='D' || in[i]=='T') code[i]=3;
			else if(in[i]=='L') code[i]=4;
			else if(in[i]=='M' || in[i]=='N') code[i]=5;
			else if(in[i]=='R') code[i]=6;
			else code[i]=0;
		}
		
		if(code[0]!=0) printf("%d",code[0]);
		for(i=1;i<len;i++)
		{
			if(code[i]!=code[i-1] && code[i]!=0) printf("%d",code[i]);
		}
		printf("\n");
	}
	return 0;
}