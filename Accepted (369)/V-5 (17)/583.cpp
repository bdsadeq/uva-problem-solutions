//Prime factors (#583)
//Sadeq

#include<stdio.h>
#include<math.h>

#define size 1000
long int pri[size],fre[size];
bool isprime(long n);
long int pfactorize(long int n1);

int main()
{
	long in;
	long i,j=0;
	long count;
	long num;

	//start input from here
	while(scanf("%ld",&in))
	{
		if(in==0) break;
		printf("%ld =",in);
		count=-1;
		if(in<0)
		{
			printf(" -1");
			in=in*(-1);
			count++;
		}
		num=pfactorize(in);
		for(i=0;i<num;i++)
		{
			for(j=0;j<fre[i];j++)
			{
				count++;
				if(count>0) printf(" x");
				printf(" %ld",pri[i]);
			}
		}
		printf("\n");
	}
	return 0;
}

long int pfactorize(long int n1)
{
	long int in,temp,j,index;
	
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