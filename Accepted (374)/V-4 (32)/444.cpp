//Encoder and Decoder (#444)
//Sadeq

#include<stdio.h>
#include<string.h>

int asc(int a);

int main()
{
	char in[1000];
	int len,i,temp,temp2;
	while(gets(in))
	{
		len=strlen(in);
		if(in[0]>='0' && in[0]<='9')
		{
			for(i=len-1;i>=0;)
			{
				temp=((in[i]-'0')*10)+(in[i-1]-'0');

				if(temp>=65 && temp<=90)
				{
					printf("%c",temp);
					i=i-2;
				}
				else if(temp>=97 && temp<=99)
				{
					printf("%c",temp);
					i=i-2;
				}
				else if(temp==32 || temp==33 || temp==44 || temp==46)
				{
					printf("%c",temp);
					i=i-2;
				}
				else if(temp==58 || temp==59 || temp==63)
				{
					printf("%c",temp);
					i=i-2;
				}
				else
				{
					temp2=((in[i]-'0')*100)+((in[i-1]-'0')*10)+(in[i-2]-'0');
					printf("%c",temp2);
					i=i-3;
				}
			}
		}
		else
		{
			for(i=len-1;i>=0;i--)
			{
				asc(in[i]);
			}
		}
		printf("\n");
	}
	return 0;
}

int asc(int a)
{
	int d1,d2,d3;
	if(a>99)
	{
		d1=a%10;
		d2=(a/10)%10;
		d3=(a/100)%10;
		printf("%d%d%d",d1,d2,d3);
	}
	if(a<100)
	{
		d1=a%10;
		d2=(a/10)%10;
		printf("%d%d",d1,d2);
	}
	return 0;
}