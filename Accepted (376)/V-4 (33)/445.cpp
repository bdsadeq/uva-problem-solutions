//Marvelous Mazes (#445)
//Sadeq

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char in[200];
	int len;
	int i,j;
	int temp;

	while(gets(in))
	{
		temp=0;
		len=strlen(in);

		//output
		for(i=0;i<len;i++)
		{
			if(in[i]=='b')
			{
				printf(" ");
				temp=0;
			}
			else if(in[i]=='!')
			{
				printf("\n");
				temp=0;
			}
			else if(isdigit(in[i]))
			{
				temp=temp+(in[i]-'0');
				if(!isdigit(in[i+1]))
				{
					for(j=1;j<=temp;j++)
					{
						if(in[i+1]=='b') printf(" ");
						else if(in[i+1]=='!') printf("\n");
						else printf("%c",in[i+1]);
					}
					i++;
					temp=0;
				}
			}
			else
			{
				printf("%c",in[i]);
				temp=0;
			}
		}
		printf("\n");
	}
	return 0;
}
