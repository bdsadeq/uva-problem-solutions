// Nice Licence Plates (#12602)
//Sadeq

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//freopen("in.txt","r",stdin);

	int cas,cc;
	int number;
	int firstPart;
	char dm[5];

	char A,B,C;

	scanf("%d",&cas);
	gets(dm);

	for(cc=1;cc<=cas;cc++)
	{
		scanf("%c%c%c-%d\n",&A,&B,&C,&number);

		//printf("%c%c%c-%d\n",A,B,C,number);

		firstPart=0;

		firstPart+=((A-'A')*26*26);

		firstPart+=((B-'A')*26);

		firstPart+=((C-'A'));


		int result=abs(number-firstPart);

		if(result<=100)
		{
			printf("nice\n");
		}
		else
		{
			printf("not nice\n");
		}


	}

	return 0;
}