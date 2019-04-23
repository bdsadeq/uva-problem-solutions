//The Trip (#10137)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	//freopen("in.txt","r",stdin);
	long cas,c;
	double amount[1200],sum,average,ans,sum2,ave2,ans2;
	while(scanf("%ld",&cas))
	{
		if(cas==0) break;
		sum=0;
		sum2=0;
		for(c=0;c<cas;c++)
		{
			scanf("%lf",&amount[c]);
			sum=sum+amount[c];
			sum2=sum2+amount[c];
		}

		average=sum/cas;
		ave2=sum2/cas;

		average=(ceil(100*average))/100;
		ave2=(floor(100*ave2))/100;
		
		ans=0;
		ans2=0;
		for(c=0;c<cas;c++)
		{
			if(amount[c]>average) ans=ans+(amount[c]-average);
			if(amount[c]<average) ans2=ans2+(ave2-amount[c]);
		}

		if(ans>ans2) printf("%c%.2lf\n",'$',ans);
		else printf("%c%.2lf\n",'$',ans2);
	}
	return 0;
}
