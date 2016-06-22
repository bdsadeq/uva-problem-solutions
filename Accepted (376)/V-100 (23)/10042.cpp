//Smith numbers (#10042)
//Sadeq

#include<stdio.h>
#include<math.h>

#define size 1000

long pri[size],fre[size];
long pfactorize(long n1);
long sum(long in);

int main()
{
	long in,sum1,sum2;
	long cas,c,found;
	long i,j,ind;
	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld",&in);
		found=0;
		while(1)
		{
			in++;
			sum1=sum(in);

			sum2=0;
			ind=pfactorize(in);
			if(ind==1 && fre[0]==1);
			else
			{
				for(i=0;i<ind;i++)
				{
					for(j=0;j<fre[i];j++)
					{
						sum2=sum2+sum(pri[i]);
					}
				}
			}
			if(sum1==sum2) break;
		}
		printf("%ld\n",in);
	}
	return 0;
}

long sum(long in)
{
	long total=0;
	while(in>0)
	{
		total=total+(in%10);
		in=in/10;
	}
	return total;
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