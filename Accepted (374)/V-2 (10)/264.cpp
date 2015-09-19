//Count on Cantor (#264)
//Sadeq

#include<stdio.h>
#include<math.h>

int main()
{
	long in;
	long num1,num2;
	long temp,out1,out2;

	while(scanf("%ld",&in)==1)
	{
		num1=(long)sqrt(in*2);
		temp=(num1*(num1+1))/2;
		if(temp>=in) num1--;
		num2=(num1*(num1+1))/2;

		out1=in-num2;
		out2=num1+2-out1;

		if((num1%2)==1)
		{
			printf("TERM %ld IS %ld/%ld\n",in,out1,out2);
		}
		else
		{
			printf("TERM %ld IS %ld/%ld\n",in,out2,out1);
		}
	}
	return 0;
}
