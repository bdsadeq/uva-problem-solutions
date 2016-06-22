//Factors and factorials (#160)
//Sadeq

#include<stdio.h>
#include<math.h>

#define size 1000
long pri[size],fre[size];
long nfre[size];

long pfactorize(long n1);
bool isprime(long n);

int main()
{
	long in;
	long i,j;
	long ind;
	long count;
	while(scanf("%ld",&in))
	{
		if(in==0) break;
		for(i=0;i<size;i++) nfre[i]=0;
		for(i=in;i>=2;i--)
		{
			ind=pfactorize(i);
			//initialize new frequency
			for(j=0;j<ind;j++)
			{
				nfre[pri[j]]=nfre[pri[j]]+fre[j];
			}
		}
		//output
		count=0;
		printf("%3ld! =",in);
		for(i=2;i<=in;i++)
		{
			if(isprime(i))
			{
				if(count==15) printf("\n      ");
				printf("%3ld",nfre[i]);
				count++;
			}
		}
		printf("\n");
	}
	return 0;
}

long pfactorize(long n1)
{
	long in,temp,j,index;;
	
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

bool isprime(long n)
{
	long i;
	if(n==2) return 1;
	if(n%2==0) return 0;
	for(i=3;i*i<=n;i=i+2)
	{
		if(n%i==0) return 0;
	}
	return 1;
}