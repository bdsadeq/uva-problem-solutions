//A multiplication game (#847)
//Sadeq

#include<stdio.h>

int main()
{
	long long in,i,p;

	while(scanf("%lld",&in)==1)
	{
		//process
		i=0;
		p=1;
		while(1)
		{
			i++;
			if((i%2)==1)
			{
				p=p*9;
				if(p>=in)
				{
					printf("Stan wins.\n");
					break;
				}
			}
			if((i%2)==0)
			{
				p=p*2;
				if(p>=in)
				{
					printf("Ollie wins.\n");
					break;
				}
			}
		}
	}
	return 0;
}
