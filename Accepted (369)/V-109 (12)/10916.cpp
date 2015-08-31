//Factstone Benchmark (#10916)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	long i,temp;
	double in;
	double y,target;
	double sum;

	while(scanf("%lf",&in))
	{
		if(in==0) break;
		y=(in-1960)/(10.0);
		temp=(long)y;
		target=pow(2,(temp+2));
		target=target*log(2.0);

		sum=0.0;
		for(i=1;;i++)
		{
			sum=sum+log(i);
			if(sum>=target) break;
		}

		printf("%ld\n",i-1);
	}

	return 0;
}
