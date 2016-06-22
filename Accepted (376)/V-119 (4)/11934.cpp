//Magic Formula (#11934)
//Sadeq

#include<stdio.h>

long long func(long long a,long long b,long long c,long long L);

int main()
{
	long long a,b,c,d,L;
	long long i,count;

	while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L))
	{
		if(a==0 && b==0 && c==0 && d==0 && L==0)
		{
			break;
		}

		count=0;
		for(i=0;i<=L;i++)
		{
			if(func(a,b,c,i)%d==0)
			{
				count++;
			}
		}

		printf("%lld\n",count);


	}


	return 0;
}

long long func(long long a,long long b,long long c,long long L)
{
	return (a*L*L)+(b*L)+c;
}
