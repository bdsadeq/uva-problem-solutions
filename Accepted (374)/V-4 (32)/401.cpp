//Palindromes (#401)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char in[50];
	char rev[50];
	char mirr[50];
	char mrev[50];

	int len;
	int pal,mir;

	int i,j;

	while(gets(in))
	{
		pal=1;
		mir=1;
		len=strlen(in);

		//reverse
		for(i=0,j=len-1;i<len;i++,j--)
		{
			rev[i]=in[j];
		}

		//mirror
		for(i=0;i<len;i++)
		{
			if(in[i]=='A') mirr[i]='A';
			else if(in[i]=='E') mirr[i]='3';
			else if(in[i]=='H') mirr[i]='H';
			else if(in[i]=='I') mirr[i]='I';
			else if(in[i]=='J') mirr[i]='L';
			else if(in[i]=='L') mirr[i]='J';
			else if(in[i]=='M') mirr[i]='M';
			else if(in[i]=='O') mirr[i]='O';
			else if(in[i]=='S') mirr[i]='2';
			else if(in[i]=='T') mirr[i]='T';
			else if(in[i]=='U') mirr[i]='U';
			else if(in[i]=='V') mirr[i]='V';
			else if(in[i]=='W') mirr[i]='W';
			else if(in[i]=='X') mirr[i]='X';
			else if(in[i]=='Y') mirr[i]='Y';
			else if(in[i]=='Z') mirr[i]='5';
			else if(in[i]=='1') mirr[i]='1';
			else if(in[i]=='2') mirr[i]='S';
			else if(in[i]=='3') mirr[i]='E';
			else if(in[i]=='5') mirr[i]='Z';
			else if(in[i]=='8') mirr[i]='8';
			else mirr[i]='-';
		}
		//mirror reverse
		for(i=0,j=len-1;i<len;i++,j--)
		{
			mrev[i]=mirr[j];
		}


		//check palindrom
		for(i=0;i<len;i++)
		{
			if(in[i]!=rev[i])
			{
				pal=0;
				break;
			}
		}
		//check mirror
		for(i=0;i<len;i++)
		{
			if(in[i]!=mrev[i])
			{
				mir=0;
				break;
			}
		}
		
		//output
		for(i=0;i<len;i++)
		{
			printf("%c",in[i]);
		}
		if(pal==0 && mir==0) printf(" -- is not a palindrome.\n");
		if(pal==1 && mir==0) printf(" -- is a regular palindrome.\n");
		if(pal==0 && mir==1) printf(" -- is a mirrored string.\n");
		if(pal==1 && mir==1) printf(" -- is a mirrored palindrome.\n");
		printf("\n");
	}
	return 0;
}
