//Find the ways ! (#10219)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long double n,k;
	long double result;
	long long temp;
	int i,digit;
	while(scanf("%Lf %Lf", &n,&k)==2)
	{
		result=0;
		temp=(long long)k;
		for(i=0;i<temp;i++)
		{
			result=result+log10(n)-log10(k);
			n--;
			k--;
		}
		digit=(int)result;
		printf("%d\n",digit+1);
	}
	return 0;
}