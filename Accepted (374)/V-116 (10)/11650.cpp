//Mirror Clock (#11650)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	long cas,c;
	long hh,mm;

	scanf("%ld",&cas);

	for(c=1;c<=cas;c++)
	{
		scanf("%ld:%ld",&hh,&mm);

		if(hh==6 && mm==0) printf("0%ld:00\n",hh);

		else
		{
			if(hh==12 && mm>0) printf("11");
			else if(hh==12) printf("12");
			else if(mm==0)
			{
				if((12-hh)==0) hh=12;
				if(12-hh<10) printf("0");
				printf("%ld",12-hh);
			}
			else if(mm>0)
			{
				if((11-hh)==0)
				{
					hh=12;
					printf("%ld",hh);
				}
				else
				{
					if(11-hh<10) printf("0");
					printf("%ld",11-hh);
				}
			}

			printf(":");

			if(mm!=0)
			{
				if((60-mm)<10) printf("0");
				if(mm==0) printf("0");
				printf("%ld",60-mm);
			}
			else
			{
				if(mm==0) printf("0");
				printf("%ld",mm);
			}

			printf("\n");
		}
	}

	return 0;
}
