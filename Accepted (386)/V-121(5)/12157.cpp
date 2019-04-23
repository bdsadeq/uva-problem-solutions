//Tariff Plan (#12157)
//Sadeq

#include<stdio.h>

long calMile(long in);
long calJuice(long in);

int main()
{
	long cas,cc;
	long mile,juice;
	long i,in,num;

	scanf("%ld",&cas);

	for(cc=1;cc<=cas;cc++)
	{
		mile=0;
		juice=0;
		scanf("%ld",&num);
		for(i=1;i<=num;i++)
		{
			scanf("%ld",&in);
			mile=mile+calMile(in);
			juice=juice+calJuice(in);
		}

		if(mile<juice)
		{
			printf("Case %ld: Mile %ld\n",cc,mile);
		}
		else if(mile>juice)
		{
			printf("Case %ld: Juice %ld\n",cc,juice);
		}
		else if(mile==juice)
		{
			printf("Case %ld: Mile Juice %ld\n",cc,juice);
		}
	}

	return 0;
}

long calMile(long in)
{
	return ((in/30)+1)*10;

}

long calJuice(long in)
{
	return ((in/60)+1)*15;

}
