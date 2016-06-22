//Factoring Large Numbers (#10392)
//Sadeq

#include<stdio.h>
#include<math.h>

#define size 1000000
long long pri[size],fre[size];
long long pfactorize(long long n1);

int main()
{
	long long in;
	long long i,j;
	long long num;

	//start input from here
	while(scanf("%lld",&in))
	{
		if(in<0) break;

		num=pfactorize(in);
		for(i=0;i<num;i++)
		{
			for(j=0;j<fre[i];j++)
			{
				printf("    %lld\n",pri[i]);
			}
		}
		printf("\n");
	}
	return 0;
}

long long pfactorize(long long n1)
{
	long long in,temp,j,index;
	
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
