//Save Setu #12403
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	//freopen("in.txt","r",stdin);

	int cas,c;
	char str[100];
	int i,len;
	long sum=0,temp;

	scanf("%d",&cas);
	//gets(str);

	for(c=1;c<=cas;c++)
	{
		scanf("%s",&str);

		//puts(str);

		if(strcmp(str,"donate")==0)
		{
			scanf("%ld",&temp);	
			sum=sum+temp;
		}


		if(strcmp(str,"report")==0)
		{
			printf("%ld\n",sum);
			//sum=0;
		}

		//puts(str);
	}



	return 0;
}
