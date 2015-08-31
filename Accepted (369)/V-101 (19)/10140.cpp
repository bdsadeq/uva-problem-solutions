//Prime Distance (#10140)
//Sadeq

#include <stdio.h>
#include <math.h>

char seive[10000001];

int main()
{
	long long a,b;
	while (scanf("%lld %lld",&a,&b)==2)
	{
		long long i,j,k,m;
		long long min=3000000000,max=0,prev,maxprev,minprev,maxi,mini;

		for(i=a;i<=b;i++)
		{
			seive[i-a] = 0;
		}
		if(a <= 2)
		{
			prev = 2;
			a = 3;
		}
		else
		{
			prev = 0;
		}
		m = sqrt((double)b);

		for(i=3;i<=m;i=i+2)
		{
			k = sqrt((double)i);

			for (j=3;j<=k;j=j+2)
			{
				if (i%j == 0) goto composite1;
			}
			k = a % i;
			if(k == 0) k = i;

			for (k=i-k;k+a<=b;k=k+i)
			{
				if (a+k == i) continue;
				seive[k] = 1;
			}
			continue;
composite1:;
		}
		
		long long temp;
		if(a%2==1) temp=a;
		else temp=a+1;

		for (i=temp;i<=b;i=i+2)
		{
			if(seive[i-a]) continue;

			if(prev) 
			{
				if (i-prev > max) 
				{
					max = i-prev;
					maxprev = prev;
					maxi = i;
				}
				if (i-prev < min) 
				{
					min = i-prev;
					minprev = prev;
					mini = i;
				}
			}
			prev = i;
		}
		if(max)
		{
			printf("%lld,%lld are closest, %lld,%lld are most distant.\n",minprev,mini,maxprev,maxi);
		}
		else
		{
			printf("There are no adjacent primes.\n");
		}
	}
	
	return 0;
}
