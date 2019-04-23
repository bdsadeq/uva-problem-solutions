//Simple division (#10407)
//Sadeq

#include<stdio.h>

long gcd(long a,long b);
long abs_diff(long x,long y);

int main()
{
	long sadeq[1100],in[1100];
	long i,j,k,result,end;
	while(1)
	{
		end=0;
		//taking input
		for(i=0;;i++)
		{
			scanf("%ld",&in[i]);
			if(in[0]==0)
			{
				end=1;
				break;
			}
			if(in[i]==0) break;
		}
		if(end==1) break;
		//calculate absulate value
		for(j=0;j<i-1;j++)
		{
			sadeq[j]=abs_diff(in[j],in[j+1]);
		}
		//calculate gcd
		result=sadeq[0];
		for(k=1;k<i-1;k++)
		{
			if(sadeq[k-1]==sadeq[k]) continue;
			result=gcd(result,sadeq[k]);
		}
		//output
		printf("%ld\n",result);
	}
	return 0;
}

long abs_diff(long x,long y)
{
	if(x>y) return x-y;
	else return y-x;
}

long gcd(long a,long b)
{
	if(a%b==0) return b;
	else return gcd(b,a%b);
}