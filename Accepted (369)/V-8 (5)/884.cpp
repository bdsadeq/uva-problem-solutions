//Factorial Factors (#884)
//Sadeq

#include<stdio.h>
#include<math.h>

#define size 1000
long pri[size],fre[size];
bool isprime(long n);
long pfactorize(long n1);
long res[1000001];

int main()
{
	long i,j;
	long ind,sum=0;
	long in;

	//create list
	for(i=2;i<=1000000;i++)
	{
		ind=pfactorize(i);
		for(j=0;j<ind;j++)
		{
			sum=sum+fre[j];
		}
		res[i]=sum;
	}

	//input & output
	while(scanf("%ld",&in)==1)
	{
		printf("%ld\n",res[in]);
	}

	return 0;
}

long pfactorize(long n1)
{
	long in,temp,j,index;
	
	in = 0;
	temp = n1;
	if((n1 % 2) == 0)
	{
		pri[in] = 2;
		fre[in] = 0;
		while((n1 % 2) == 0)
		{
			n1 = n1 / 2;
			fre[in]++;
		}
		in++;
	}
	if((n1 % 3) == 0)
	{
		pri[in] = 3;
		fre[in] = 0;
		while((n1 % 3) == 0)
		{
			n1 = n1 / 3;
			fre[in]++;
		}
		in++;
	}
	for(j = 5;j <= sqrt(n1);j+=6)
	{
		if(n1 == 1)
		{
			break;
		}
		if((n1 % j) == 0)
		{
			pri[in] = j;
			fre[in] = 0;
			while((n1 % j) == 0)
			{
				n1 = n1 / j;
				fre[in]++;
			}
			in++;
		}
		if((n1 % (j + 2)) == 0)
		{
			pri[in] = (j + 2);
			fre[in] = 0;
			while((n1 % (j + 2)) == 0)
			{
				n1 = n1 / (j + 2);
				fre[in]++;
			}
			in++;
		}
	}
	if(n1>1)
	{
		index = in;
		pri[in] = n1;
		fre[in] = 1;
	}
	else
	{
		index = in - 1;
	}

	return (++index);
}
