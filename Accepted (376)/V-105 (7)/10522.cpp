//Height to Area (#10522)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	//freopen("in.txt","r",stdin);

	double ha,hb,hc;
	double a,b,c;
	double ans,temp1,temp2;
	long inv;

	scanf("%ld",&inv);

	while(scanf("%lf %lf %lf",&ha,&hb,&hc))
	{
		if(ha<=0 || hb<=0 || hc<=0)
		{
			inv--;
			printf("These are invalid inputs!\n");
		}

		else
		{
			a=1/ha;
			b=1/hb;
			c=1/hc;
			temp1=(a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c);
			
			if(temp1==0)
			{
				inv--;
				printf("These are invalid inputs!\n");
			}

			else
			{
				temp2=1/temp1;
				if(temp2<0)
				{
					inv--;
					printf("These are invalid inputs!\n");
				}
				else
				{
					ans=sqrt(temp2);
					printf("%.3lf\n",ans);
				}
			}
		}
		if(inv==0) break;
	}

	return 0;
}
