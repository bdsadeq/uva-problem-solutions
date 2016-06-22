//Reverse and Add (#10018)
//Sadeq

#include<stdio.h>
#include<math.h>

long long count_digit(long long num);
long long reverse(long long num);

int main()
{
	long long num,ans,rev;
	int cas,i;
	scanf("%d",&cas);
	for(i=1;i<=cas;i++)
	{
		scanf("%lld",&num);
		ans=0;
		while(1)
		{
			rev=reverse(num);
			if(rev==num) break;
			else
			{
				num=rev+num;
				ans++;
			}
		}
		printf("%lld %lld\n",ans,num);
	}
	return 0;
}

long long count_digit(long long num)
{
	long long count=0;;
	while(1)
	{
		num=num/10;
		if(num==0) break;
		count++;
	}
	return count;
}


long long reverse(long long num)
{
	long long count=count_digit(num);
	long long result=0,mod;
	long long i;
	for(i=count;i>=0;i--)
	{
		mod=num%10;
		num=num/10;
		result=result+mod*pow(10,i);
	}
	return result;
}