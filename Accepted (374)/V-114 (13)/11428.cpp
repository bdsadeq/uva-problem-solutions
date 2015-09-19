//Cubes (#11428)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long long in,temp;
	long long a,b;
	long long i,j;
	long long fnd;
	while(scanf("%lld",&in))
	{
		if(in==0) break;
		temp=sqrt(in)+1;
		fnd=0;
		for(i=1;i<=temp;i++)
		{
			for(j=temp;j>=1;j--)
			{
				b=i*i*i;
				a=j*j*j;
				if((a-b)<in) break;
				if(in==(a-b))
				{
					fnd=1;
					printf("%lld %lld\n",j,i);
					break;
				}
			}
			if(fnd==1) break;
		}
		if(fnd==0) printf("No solution\n");
	}
	return 0;
}
