// Slogan Learning of Princess (#12592)
//Sadeq

#include<stdio.h>
#include<string.h>


int main()
{
	int num,N;
	int i,j;

	char list[200][30];
	char ans[200][30];
	char dm[5];
	char str[200];

	scanf("%d",&num);
	gets(dm);

	for(i=0;i<num;i++)
	{
		gets(list[i]);
		gets(ans[i]);
	}

	//printf("test\n");

	scanf("%d",&N);
	gets(dm);

	for(j=0;j<N;j++)
	{
		//take input
		gets(str);

		//search
		for(i=0;i<num;i++)
		{
			if(strcmp(str,list[i])==0)
			{
				printf("%s\n",ans[i]);
			}
		}

	}

	return 0;
}
