//The Lazy Lumberjacks (#11936)
//Sadeq

#include<stdio.h>

int main()
{
	long cas,cc;
	long a,b,c;
	long ans;

	scanf("%ld",&cas);

	for(cc=1;cc<=cas;cc++)
	{
		scanf("%ld %ld %ld",&a,&b,&c);

		ans=1;
		//checking the side making
		if(a+b<=c)
		{
			ans=0;
		}
		if(a+c<=b)
		{
			ans=0;
		}
		if(c+b<=a)
		{
			ans=0;
		}

		if(ans==0) printf("Wrong!!\n");
		else if(ans==1) printf("OK\n");
	}

	return 0;
}
