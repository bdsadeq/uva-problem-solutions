//Divisors (#294)
//Sadeq

#include<stdio.h>
#include<math.h>

#define size 1000
long pri[size],fre[size];
long pfactorize(long n1);

int main()
{
	long cas,a;
	long in1,in2;
	long maxdiv,number,div;
	long i,j,num;
	scanf("%ld",&cas);
	for(a=1;a<=cas;a++)
	{
		scanf("%ld %ld",&in1,&in2);
		maxdiv=0;
		for(i=in1;i<=in2;i++)
		{
			div=1;
			num=pfactorize(i);
			for(j=0;j<num;j++)
			{
				div=div*(fre[j]+1);
			}
			if(div>maxdiv)
			{
				maxdiv=div;
				number=i;
			}
		}
		printf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n",in1,in2,number,maxdiv);
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