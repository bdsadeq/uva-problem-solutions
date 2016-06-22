//Roman Numerals #12397
//Sadeq

#include<stdio.h>
#include<string.h>

const char *Number_AsRomanString( int iNumber );

int main()
{
	//freopen("in.txt","r",stdin);

	int in;
	char str[100];
	int len;
	int sum;

	//input
	while(scanf("%d",&in)==1)
	{
		str[0] = '\0';
		strcat( str, Number_AsRomanString(in));

		len=strlen(str);
		sum=0;
		
		for(int i=0;i<len;i++)
		{
			if(str[i]=='I') sum=sum+1;
			else if(str[i]=='V') sum=sum+2;
			else if(str[i]=='X') sum=sum+2;
			else if(str[i]=='L') sum=sum+2;
			else if(str[i]=='C') sum=sum+2;
			else if(str[i]=='D') sum=sum+3;
			else if(str[i]=='M') sum=sum+4;
		}

		printf("%d\n",sum);
	}

	return 0;
}

// written by Ste Cork, free for any and all use.
//
const char *Number_AsRomanString( int iNumber )
{
	struct RomanDigit_t
	{
		char *m_psString;
		int m_iValue;
	};

	static const RomanDigit_t RomanDigits[]=
	{
		{"M",  1000},
		{"CM",  900},
		{"D",   500},
		{"CD",  400},
		{"C",   100},
		{"XC",   90},
		{"L",    50},
		{"XL",   40},
		{"X",    10},
		{"IX",    9},
		{"V",     5},
		{"IV",    4},
		{"I",     1},
	};

	// Strictly speaking, Roman digits can't display something
	// such as 4999 without using overlaid bars and so forth,
	// but for now this is a quick-and-dirty piece of code that'll
	// just keep using M's...
	//
	static char sRomanString[20];
	sRomanString[0] = '\0';

	for (int i=0; iNumber && i<sizeof(RomanDigits)/
		sizeof(RomanDigits[0]); i++)
	{
		while ( RomanDigits[i].m_iValue <= iNumber )
		{
			strcat( sRomanString, RomanDigits[i].m_psString );
			iNumber -= RomanDigits[i].m_iValue;
		}
	}

	return sRomanString;
}
