//Decode the tape (#10878)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<math.h>

int to_dec(char in[],int len);

int main()
{
	char in[10000][20];
	char bin[20];
	int i=0;
	int j,k,b;
	
	//take input
	while(gets(in[i]))
	{
		if(i>0 && in[i][0]=='_') break;
		i++;
	}

	//output
	for(j=1;j<i;j++)
	{
		b=0;
		for(k=0;k<11;k++)
		{
			if(in[j][k]==' ')
			{
				bin[b]='0';
				b++;
			}
			else if(in[j][k]=='o')
			{
				bin[b]='1';
				b++;
			}
		}
		to_dec(bin,b);
	}
	return 0;
}

int to_dec(char in[],int len)
{
	int i,temp,n;
	int dec=0;
	temp=len;
	for(i=0;i<len;i++)
	{
		n=in[i]-'0';
		temp--;
		dec=dec+(n*(pow(2,temp)));
	}
	printf("%c",dec);
	return 0;;
}
