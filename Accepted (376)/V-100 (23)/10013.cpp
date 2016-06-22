//Super long sums (#10013)
//Sadeq

#include<stdio.h>

long ans[1000010];

int main()
{
	//freopen("in.txt","r",stdin);
	long in1,in2,d;
	long cas,c;
	long i;

	scanf("%ld",&cas);
	for(c=1;c<=cas;c++)
	{
		scanf("%ld",&d);

		if(c>1) printf("\n");
		for(i=1;i<=d;i++)
		{
			scanf("%ld %ld",&in1,&in2);
			ans[i]=in1+in2;
		}

		//claculate
		ans[0]=0;
		for(i=d;i>=1;i--)
		{
			if(ans[i]>=10)
			{
				ans[i-1]=ans[i-1]+1;
				ans[i]=ans[i]-10;
			}
		}
		
		//output
		for(i=1;i<=d;i++) printf("%ld",ans[i]);
		printf("\n");
	}

	return 0;
}
