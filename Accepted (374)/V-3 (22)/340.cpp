//Master-Mind Hints (#340)
//Sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);
	long N;
	long list[1200];
	long main[1200];
	long copyMain[1200];
	long cas=0;
	long i,j;
	long count;

	while(scanf("%ld",&N))
	{
		if(N==0) break;
		cas++;
		printf("Game %ld:\n",cas);

		//take original
		for(i=0;i<N;i++)
		{
			scanf("%ld",&main[i]);
		}

		//take sample and give output
		while(1)
		{
			for(i=0;i<N;i++)
			{
				scanf("%ld",&list[i]);
			}

			if(list[0]==0) break;

			//make copy of main
			for(i=0;i<N;i++)
			{
				copyMain[i]=main[i];
			}

			//check the output
			printf("    (");

			//check how many match
			count=0;
			for(i=0;i<N;i++)
			{
				if(main[i]==list[i])
				{
					count++;
					main[i]=-1;
					list[i]=-2;
				}
			}
			printf("%ld,",count);

			//check the guess
			count=0;
			for(i=0;i<N;i++)
			{
				for(j=0;j<N;j++)
				{
					if(main[i]==list[j])
					{
						count++;
						list[j]=0;
						break;
					}
				}
			}

			printf("%ld",count);

			printf(")\n");

			//make original
			for(i=0;i<N;i++)
			{
				main[i]=copyMain[i];
			}
		}
	}

	return 0;
}
