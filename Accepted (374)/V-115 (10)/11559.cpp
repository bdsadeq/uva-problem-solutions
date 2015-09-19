//Event Planning #11559
//Sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);

	long participantNumber,budget,hotelNumber,weekNumber;
	long costPerPerson,bed[2000];
	long i,j;
	long finalBudget;
	long tempCost;

	while(scanf("%ld %ld %ld %ld",&participantNumber,&budget,&hotelNumber,&weekNumber)==4)
	{
		finalBudget=100000000;

		for(i=0;i<hotelNumber;i++)
		{
			scanf("%ld",&costPerPerson);

			for(j=0;j<weekNumber;j++)
			{

				scanf("%ld",&bed[j]);

				if(bed[j]>=participantNumber)
				{
					tempCost=costPerPerson*participantNumber;
					if(tempCost<finalBudget && tempCost<budget)
					{
						finalBudget=tempCost;
					}
				}
			}
		}

		if(finalBudget==100000000)
		{
			printf("stay home\n");
		}
		else
		{
			printf("%ld\n",finalBudget);
		}

	}


	return 0;
}
