//Geometry Paradox (#10573)
//Sadeq

#include<stdio.h>
#include<math.h>

#define PI 2*acos(0.0)

int main()
{
	long cas,c;
	long bs,dbs,cnt;
	char in[20],dm[5];
	double a,b,temp;

	scanf("%ld",&cas);gets(dm);
	for(c=1;c<=cas;c++)
	{
		gets(in);

		bs=dbs=0;
		cnt=0;
		while(sscanf(in+bs,"%lf%n",&temp,&dbs)==1)
		{
			if(cnt==0) a=temp;
			else b=temp;
			cnt++;
			bs=bs+dbs;
		}
		if(cnt==1)
		{
			printf("%.4lf\n",(PI*a*a)/8);
		}

		else if(cnt==2)
		{
			printf("%.4lf\n",2*PI*a*b);
		}
	}

	return 0;
}
