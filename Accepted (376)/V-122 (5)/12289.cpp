//One-Two-Three (#12289)
//sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);

	int cas,cc;
	char inp[20];
	int count=0;
	int len,i;
	int output;

	scanf("%d\n",&cas);

	for(cc=1;cc<=cas;cc++)
	{
		gets(inp);

		if(strlen(inp)==5)
		{
			printf("3\n");
		}
		else
		{
			//check one
			char one[20]="one";
			count=0;
			for(i=0;i<3;i++)
			{
				if(inp[i]!=one[i])
				{
					count++;
				}
			}

			if(count==1 || (strcmp(inp,one)==0))
			{
				printf("1\n");
			}
			else
			{
				printf("2\n");
			}
		}

	}

	return 0;
}
