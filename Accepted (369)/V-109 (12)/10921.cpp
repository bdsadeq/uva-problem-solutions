//Find the telephone (#10921)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char in[40];
	int i,len;
	while(gets(in))
	{
		len=strlen(in);
		for(i=0;i<len;i++)
		{
			if(in[i]=='A' || in[i]=='B' || in[i]=='C') printf("2");
			else if(in[i]=='D' || in[i]=='E' || in[i]=='F') printf("3");
			else if(in[i]=='G' || in[i]=='H' || in[i]=='I') printf("4");
			else if(in[i]=='J' || in[i]=='K' || in[i]=='L') printf("5");
			else if(in[i]=='M' || in[i]=='N' || in[i]=='O') printf("6");
			else if(in[i]=='P' || in[i]=='Q' || in[i]=='R' || in[i]=='S') printf("7");
			else if(in[i]=='T' || in[i]=='U' || in[i]=='V') printf("8");
			else if(in[i]=='W' || in[i]=='X' || in[i]=='Y' || in[i]=='Z') printf("9");
			else printf("%c",in[i]);
		}
		printf("\n");
	}
	return 0;
}