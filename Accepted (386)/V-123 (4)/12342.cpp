//Tax Calculator (#12342)
//sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long long money;
	long cc,cas;
	double tax;

	scanf("%ld",&cas);
	for(cc=1;cc<=cas;cc++)
	{
		scanf("%lld",&money);
		tax=0;

		if(money<=180000)
		{
			//do nothing
		}

		money=money-180000;
		if(money>0)
		{
			if(money<=300000)
			{
				tax=tax+(double(money*10)/100);
			}
			else
			{
				tax=tax+(double(300000*10)/100);
			}
		}

		money=money-300000;
		if(money>0)
		{
			if(money<=400000)
			{
				tax=tax+(double(money*15)/100);
			}
			else
			{
				tax=tax+(double(400000*15)/100);
			}
		}

		money=money-400000;
		if(money>0)
		{
			if(money<=300000)
			{
				tax=tax+(double(money*20)/100);
			}
			else
			{
				tax=tax+(double(300000*20)/100);
			}
		}

		money=money-300000;
		if(money>0)
		{
			tax=tax+(double(money*25)/100);
		}

		if(tax<2000 && tax>0)
		{
			printf("Case %ld: 2000\n",cc);
		}
		else
		{
			printf("Case %ld: %.0lf\n",cc,ceil(tax));
		}

	}


	return 0;
}
