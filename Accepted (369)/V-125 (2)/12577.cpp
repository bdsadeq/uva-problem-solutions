// Hajj-e-Akbar (#12577)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char word[200];
	int cas=0;

	while(gets(word))
	{
		if(strcmp("*",word)==0)
		{
			break;
		}

		cas++;
		printf("Case %d: ",cas);

		if(strcmp("Hajj",word)==0)
		{
			printf("Hajj-e-Akbar\n");
		}
		else if(strcmp("Umrah",word)==0)
		{
			printf("Hajj-e-Asghar\n");
		}
	}

	return 0;
}
