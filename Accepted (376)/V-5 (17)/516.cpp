//Prime Land (#516)
//Sadeq

#include<stdio.h>
#include<math.h>

#define size 1000

long long pfactorize(long long n1);
long long pri[size],fre[size];

int main()
{
	char in[10000];
	long long bs,dbs,cnt;
	long long val[1000];
	long long res,fac,i;

	while(gets(in))
	{
		if(in[0]=='0') break;
		bs=dbs=0;
		cnt=0;
		while(sscanf(in+bs,"%lld%n",&val[cnt],&dbs)==1)
		{
			cnt++;
			bs=bs+dbs;
		}

		res=1;
		for(i=0;i<cnt;i=i+2)
		{
			res=res*pow(val[i],val[i+1]);
		}
		res--;

		fac=pfactorize(res);
		for(i=fac-1;i>=0;i--)
		{
			if(i<fac-1) printf(" ");
			printf("%lld %lld",pri[i],fre[i]);
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
