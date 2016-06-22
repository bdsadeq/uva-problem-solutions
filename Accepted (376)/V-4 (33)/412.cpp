//Pi (#412)
//Sadeq

#include<stdio.h>
#include<math.h>

long gcd(long a,long b);

int main()
{
//	freopen("in.txt","r",stdin);
	long cas,c;
	long arr[100];
	long i,j;
	long tot,cnt;
	double result;
	while(scanf("%ld",&cas))
	{
		if(cas==0) break;
		for(c=0;c<cas;c++)
		{
			scanf("%ld",&arr[c]);
		}

		//calculation
		cnt=0;
		tot=0;
		for(i=0;i<cas-1;i++)
		{
			for(j=i+1;j<cas;j++)
			{
				tot++;
				if(gcd(arr[i],arr[j])==1) cnt++;
			}
		}

		result=sqrt((6.0/(double)cnt)*(double)tot);

		if(cnt==0) printf("No estimate for this data set.\n");
		else printf("%lf\n",result);
	}
	return 0;
}

long gcd(long a,long b)
{
	if(a%b==0) return b;
	else return gcd(b,a%b);
}
