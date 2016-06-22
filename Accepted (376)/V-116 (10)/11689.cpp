//Soda Surpler (#11689)
//Sadeq

#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);

	long cas,cc;
	long a,b,c;
	long sum,count,khali;

	scanf("%ld",&cas);

	for(cc=1;cc<=cas;cc++)
	{
		scanf("%ld %ld %ld",&a,&b,&c);

		sum=a+b;
		count=0;
		while(1)
		{
			if(sum<c) break;

			count=count+(sum/c);
			khali=sum/c;
			sum=khali+(sum%c);

			//printf("%ld %ld\n",count,sum);
		}

		printf("%ld\n",count);
	}

	return 0;
}
