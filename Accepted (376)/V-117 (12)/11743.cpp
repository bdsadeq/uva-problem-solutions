//Credit Check (#11743)
//Sadeq

#include<stdio.h>

int main()
{
	long cas,cc,sum1,sum2;
	long arr[20];
	long in,i,j,k;

	scanf("%ld",&cas);

	for(cc=1;cc<=cas;cc++)
	{
		k=0;
		for(i=1;i<=4;i++)
		{
			scanf("%ld",&in);

			//processing
			arr[k]=in/1000;
			in=in%1000;
			arr[k+1]=in/100;
			in=in%100;
			arr[k+2]=in/10;
			in=in%10;
			arr[k+3]=in;

			k=k+4;
		}

		//calculating
		sum1=0;
		sum2=0;
		for(i=0;i<16;i=i+2)
		{
			arr[i]=arr[i]*2;
			sum1=sum1+(arr[i]/10)+(arr[i]%10);
		}
		for(i=1;i<16;i=i+2)
		{
			sum2=sum2+arr[i];
		}

		if(((sum1+sum2)%10)==0) printf("Valid\n");
		else printf("Invalid\n");
	}

	return 0;
}
