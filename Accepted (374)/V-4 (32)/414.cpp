//Machined Surfaces (#414)
//Sadeq

#include<stdio.h>
#include<string.h>

int main()
{
	char in[30],a[30],dm[5];
	long n,i,j,len;
	long sum,min,result;

	while(scanf("%ld",&n))
	{
		gets(dm);
		if(n==0) break;

		//calculation
		for(i=0;i<30;i++) a[i]=0;
		sum=0;
		for(i=0;i<n;i++)
		{
			gets(in);
			len=strlen(in);
			for(j=0;j<len;j++)
			{
				if(in[j]==' ') a[i]++;
			}
			sum=sum+a[i];
		}

		min=10000;
		for(i=0;i<n;i++)
		{
			if(a[i]<min) min=a[i];
		}

		result=sum-(n*min);
		printf("%ld\n",result);
	}
	return 0;
}
